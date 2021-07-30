/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 00:02:12 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/16 00:02:13 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s2 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int		i;
		int		j;
		char	str_hidenp[4096];

		i = 0;
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				str_hidenp[i] = argv[1][i];
				i += 1;
			}
			j += 1;
		}
		if (!ft_strcmp(argv[1], str_hidenp))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
