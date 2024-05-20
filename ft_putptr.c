/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:14:44 by sreo              #+#    #+#             */
/*   Updated: 2024/05/20 19:04:44 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	printptr(uintptr_t ptr)
{
	int		i;
	int		temp;
	char	nbr[15];

	ft_bzero(nbr, 15);
	i = 0;
	while (ptr != 0)
	{
		temp = ptr % 16;
		if (temp < 10)
			nbr[i] = temp + 48;
		else
			nbr[i] = temp + 87;
		ptr /= 16;
		i++;
	}
	temp = i;
	while (i >= 0)
	{
		write(1, &nbr[i], 1);
		i--;
	}
	return (temp);
}

int	ft_putptr(unsigned long long ptr)
{
	write(1, "0x", 2);
	return (printptr(ptr) + 2);
}
