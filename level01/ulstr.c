/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:47:27 by jaleman           #+#    #+#             */
/*   Updated: 2016/09/01 17:29:32 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	char	letter;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			letter = argv[1][i];
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
				letter += 32;
			if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
				letter -= 32;
			write(1, &letter, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
