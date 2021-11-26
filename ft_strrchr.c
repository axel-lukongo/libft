/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:26:03 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/26 13:41:17 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

//good

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;

	tmp = 0;
	while (*str)
	{
		if (*str == c)
			tmp = (char *)str;
		str++;
	}
	if (*str == c)
		tmp = (char *)str;
	return (tmp);
}
