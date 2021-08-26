/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:51:14 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/14 14:52:08 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

// DO NOT SUBMIT ANYTHING BELOW

#include <stdio.h>

int main (void)
{
	char str[] = "Flavio";

	printf("%d\n", ft_strlen(str));
	return (0);
}
