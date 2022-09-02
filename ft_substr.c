/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_lib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:39:43 by alukongo          #+#    #+#             */
/*   Updated: 2022/08/31 19:40:08 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//good
//je ne devais pas retourner 0 si start > que la taille de s
char	*ft_substr_lib(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!(s))
	{
		return (0);
	}
	if (start > (unsigned int) ft_strlen(s))
	{
		return (ft_calloc(1, sizeof(char)));
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
