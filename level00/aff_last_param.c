/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 19:09:51 by jaleman           #+#    #+#             */
/*   Updated: 2016/09/01 19:21:47 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	i = 0;
	if (argc > 1)
	{
		while(argv[argc - 1][i])
			write(1, &argv[argc - 1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
