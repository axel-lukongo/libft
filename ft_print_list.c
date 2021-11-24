/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:19:53 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/24 12:20:27 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void	print_list(t_list *beta)
{
	int	*c;

	while (beta)
	{
		c = beta->content;
		printf("[%d]--->", *c);
		beta = beta->next;
	}
	printf("NULL");
	printf("\n");
}
