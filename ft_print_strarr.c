/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strarr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:39:21 by mvomiero          #+#    #+#             */
/*   Updated: 2023/06/26 15:44:13 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_strarr(char **arr)
{
	int i;
	if (!arr)
		return ;
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
}