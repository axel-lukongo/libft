/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:33:45 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/26 12:57:21 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//good
void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
