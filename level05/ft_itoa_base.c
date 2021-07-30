/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 05:13:49 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/03 05:19:03 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_itoa_base(int value, int base)
{
	int		len;
	long	nbr;
	char	*pointer;
	char	*base_string = "0123456789ABCDEF";

	if (value == 0)
		return ("0");
	len = 0;
	nbr = value;
	while (nbr)
	{
		nbr /= base;
		len += 1;
	}
	nbr = value;
	if (nbr < 0)
	{
		if (base == 10)
			len += 1;
		nbr *= -1;
	}
	if (!(pointer = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	pointer[len] = '\0';
	while (nbr)
	{
		pointer[--len] = base_string[nbr % base];
		nbr /= base;
	}
	if (value < 0 && base == 10)
		pointer[0] = '-';
	return (pointer);
}
