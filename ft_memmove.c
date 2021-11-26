/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:16:12 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/26 12:22:51 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//good
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_src = (unsigned char *) src;
	ptr_dest = (unsigned char *)dest;
	if (ptr_src < ptr_dest)
	{
		while (n)
		{
			ptr_dest[n] = ptr_src[n];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
