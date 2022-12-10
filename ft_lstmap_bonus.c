/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:36:01 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/10 16:52:46 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

/* 
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

void *upper_lst(void *content)
{
	size_t	i;
	char	*str;

	str = ft_strdup((char*)content);
	i = 0;
	while(str[i]) {
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
void print_list(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst) {
		printf("%zu:%s\n", i, lst->content);
		lst = lst->next;
		i++;
	}
	printf("\n");
}

int main(void)
{
	t_list *first = ft_lstnew(ft_strdup("ciaociaociao"));

	t_list	*list_copy = ft_lstmap(first, &upper_lst, &free);

	print_list(list_copy);


} */
