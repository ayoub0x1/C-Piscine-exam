/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 10:06:43 by jaleman           #+#    #+#             */
/*   Updated: 2016/12/06 10:41:52 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;

	if (argc > 1)
	{
		i = 0;
		j = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i += 1;
		k = i;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i += 1;
		while (argv[1][i])
		{
			if (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t') \
				&& (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
			{
				while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
					write(1, &argv[1][i++], 1);
				write(1, " ", 1);
			}
			i += 1;
		}
		while (argv[1][k] && (argv[1][k] != ' ' && argv[1][k] != '\t'))
			write(1, &argv[1][k++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
