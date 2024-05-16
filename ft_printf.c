/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:41:35 by sreo              #+#    #+#             */
/*   Updated: 2024/05/16 23:36:53 by marvin           ###   ########.fr       */
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
		if(format[i] == '%')
			count += format_processor(format[++i], args);
		else
			count += ft_putchr(format[i]);
		i++;
	}
	return count;
}

#include <stdio.h>

int main (void)
{
	int i = 3;
	char num = '7';
	char str[30] = "HelloWorld!";
	
	printf("%d\n", (int)ft_strlen(str) + 1);
	printf("%d\n", printf("%sass%c\n", str, num));
	ft_printf("%d\n", (int)ft_strlen(str) + 1);
	printf("%d\n", ft_printf("%sass%c\n", str, num));
	return 0;
}
