/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:11:24 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/24 12:12:15 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*ptr_src;
	char	*ptr_dest;

	ptr_src = (char *)src;
	ptr_dest = (char *)dest;
	while (n)
	{
		*ptr_dest = *ptr_src;
		if (*ptr_dest == (unsigned char) c)
		{
			return (ptr_dest + 1);
		}
		ptr_dest++;
		ptr_src++;
		n--;
	}
	return (0);
}
