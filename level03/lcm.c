/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 20:28:09 by jaleman           #+#    #+#             */
/*   Updated: 2017/04/15 20:28:09 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int		gcd;
	int		old_a;
	int		old_b;

	gcd = 0;
	old_a = a;
	old_b = b;
	while (1)
	{
		if (a == 0)
			break ;
		b %= a;
		if (b == 0)
			break ;
		a %= b;
	}
	gcd = (!b) ? a : b;
	return (gcd ? (old_a / gcd * old_b) : 0);
}
