/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:41:35 by sreo              #+#    #+#             */
/*   Updated: 2024/05/14 21:40:50 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	while(format != NULL)
	{
		
	}
}

int main (void)
{
	ft_printf("HelloWorld!");
	return 0;
}
