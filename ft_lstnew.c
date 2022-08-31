/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:05:47 by alukongo          #+#    #+#             */
/*   Updated: 2022/08/31 14:04:49 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//good
t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (0);
	ptr->content = content;
	ptr->next = 0;
	return (ptr);
}
