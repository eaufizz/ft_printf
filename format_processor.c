/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_processor.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:44:44 by marvin            #+#    #+#             */
/*   Updated: 2024/05/16 23:44:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int format_processor(char sign, va_list args)
{
    if(sign == 'c')
        return ft_putchr(va_arg(args, int));
    else if(sign == 's')
        return ft_putstr(va_arg(args, char *));
}