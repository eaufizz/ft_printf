/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:41:35 by sreo              #+#    #+#             */
/*   Updated: 2024/05/18 14:11:28 by marvin           ###   ########.fr       */
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

#include <stdio.h>

int main (void)
{
	int i = 349813742;
	unsigned int j = 4073829472;
	char num = '7';
	char str[30] = "HelloWorld!";
	char *ptr = &num;
	printf("テスト結果(本家)----------------------\n");
	printf("返り値：%d\n", printf("%%S %s C %c P %p D %d I %i U %u X %x %X\n", str, num, ptr, i, i, j, i, i));
	printf("テスト結果(自作)----------------------\n");
	printf("返り値：%d\n", ft_printf("%%S %s C %c P %p D %d I %i U %u X %x %X\n", str, num, ptr, i, i, j, i, i));
	return 0;
}
