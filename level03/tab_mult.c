/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 04:03:18 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/16 04:03:19 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		sign;

	if (!str)
		return (0);
	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' ||  \
		str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i += 1;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && str[i] >= '0' && '9' >= str[i])
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr < 10)
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
int		main(int argc, char *argv[])
{
	int		i;
	int		nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}
