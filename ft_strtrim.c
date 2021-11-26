/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:30:40 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/26 16:15:32 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//good
int	size_cpy(char const *s1, char const *set)
{
	int	size;

	size = ft_strlen(s1);
	while (*s1 && s1[--size] == *set)
		;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*cpy;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 == *set)
		s1++;
	size = size_cpy(s1, set);
	cpy = malloc(sizeof(char) * size + 2);
	if (!cpy)
		return (0);
	while (i <= size)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
