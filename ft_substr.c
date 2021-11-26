/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:39:43 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/26 14:00:39 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//good
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!(s))
	{
		return (0);
	}
	if (start > (unsigned int) ft_strlen(s))
	{
		return (0);
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
