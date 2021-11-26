/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:15:07 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/26 12:21:24 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>
//good
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptr_dest;
	char			*ptr_src;

	ptr_src = (char *)src;
	ptr_dest = dest;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
