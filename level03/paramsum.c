/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:15:32 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/16 02:15:33 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	else if (nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int		main(int argc, const char *argv[])
{
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
