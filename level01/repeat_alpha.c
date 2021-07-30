/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 14:41:40 by jaleman           #+#    #+#             */
/*   Updated: 2016/09/01 15:43:30 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = 0;
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
				letter = argv[1][i] - 63;
			else if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
            {
				letter = argv[1][i] - 95;
				while (--letter)
					write(1, &argv[1][i], 1);
            }
            else
                write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
