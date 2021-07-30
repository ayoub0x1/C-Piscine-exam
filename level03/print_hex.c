/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:15:32 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/16 02:15:33 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int p)
{
	char *str;

	str = "0123456789abcdef";
	if (p == 0)
		write (1, "0", 1);
	while (p)
	{
		write(1, &str[p % 16], 1);
		p /= 16;
	}
}

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (!str[i])
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || \
		str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i += 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && (str[i] >= '0' && '9' >= str[i]))
		nbr = (nbr * 10) + str[i++] - '0';
	return (nbr * sign);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
