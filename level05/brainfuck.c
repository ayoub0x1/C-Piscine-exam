/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 04:23:79 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/10 04:29:23 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 2048

int			main(int argc, const char *argv[])
{
	int		i;
	int		loop;
	char	*pointer;

	if (argc == 2)
	{
		i = 0;
		if (!(pointer = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
			return (-1);
		while (i <= BUFF_SIZE)
			pointer[i++] = '\0';
		i = 0;
		while (argv[1][i])
		{
			argv[1][i] == '<' ? pointer += 1 : pointer;
			argv[1][i] == '>' ? pointer -= 1 : pointer;
			argv[1][i] == '+' ? *pointer += 1 : *pointer;
			argv[1][i] == '-' ? *pointer -= 1 : *pointer;
			if (argv[1][i] == '.')
				write(1, &*pointer, 1);
			if (argv[1][i] == '[' && !*pointer)
			{
				loop = 1;
				while (loop)
				{
					i += 1;
					argv[1][i] == '[' ? loop += 1 : loop;
					argv[1][i] == ']' ? loop -= 1 : loop;
				}
			}
			if (argv[1][i] == ']' && *pointer)
			{
				loop = 1;
				while (loop)
				{
					i -= 1;
					argv[1][i] == '[' ? loop -= 1 : loop;
					argv[1][i] == ']' ? loop += 1 : loop;
				}
			}
			i += 1;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
