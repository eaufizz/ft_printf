/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:25:52 by sreo              #+#    #+#             */
/*   Updated: 2024/05/20 15:25:52 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nbr)
{
	int		count;
	char	*str;

	str = ft_itoa(nbr);
	count = ft_putstr(str);
	free(str);
	return (count);
}
