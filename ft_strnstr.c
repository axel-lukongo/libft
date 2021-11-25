/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:57:16 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/25 15:26:33 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		tmp = i;
		while (big[i + j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
