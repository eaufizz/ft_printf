/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boss <boss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:42:25 by sreo              #+#    #+#             */
/*   Updated: 2024/05/17 14:25:37 by boss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

int ft_printf(const char *format, ...);
int ft_putchr(int c);
int ft_putstr(char *str);
int format_processor(char sign, va_list args);
int ft_putptr(void *ptr);

#endif