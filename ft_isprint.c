/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:44:38 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/26 12:11:52 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//good
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
