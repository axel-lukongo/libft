/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:03:26 by alukongo          #+#    #+#             */
/*   Updated: 2022/02/21 19:03:57 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	c;

	i = 8;
	c = av[1][0];
	while (i--)
	{
		if (c & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}
