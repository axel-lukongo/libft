/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:15:55 by alukongo          #+#    #+#             */
/*   Updated: 2021/11/24 12:16:03 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

//faudras que je demande le main des autre
void	ft_memdel(void **app)
{
	if (app)
	{	
		free(*app);
		*app = NULL;
	}
}
