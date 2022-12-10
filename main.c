/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:13:36 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/10 16:52:50 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


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


}


