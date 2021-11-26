/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:16:12 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/26 18:34:42 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//good
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = ft_strnew(n);
	if (tmp)
	{
		tmp = ft_memcpy(tmp, src, n);
		dest = ft_memcpy(dest, tmp, n);
	}
	free(tmp);
	return (dest);
}
