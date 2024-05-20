/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:14:09 by sreo              #+#    #+#             */
/*   Updated: 2024/05/20 15:14:12 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	va_list args;
	va_start(args, format);
	while(format[i])
	{
		if(format[i] == '%' && format[i + 1])
		{
			if(format[i + 1] == '%')
				count += ft_putchr(format[++i]);
			else
				count += format_processor(format[++i], args);
		}
		else
			count += ft_putchr(format[i]);
		i++;
	}
	return count;
}
