/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:30:25 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/24 15:30:27 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

//a verifier mais je pense que c'est bon

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (0);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return (str);
		}
		i++;
	}
	return (0);
}
