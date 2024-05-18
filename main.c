/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 00:38:30 by marvin            #+#    #+#             */
/*   Updated: 2024/05/19 00:38:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

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
