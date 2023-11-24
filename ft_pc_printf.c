/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pc_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:55:24 by talhaoui          #+#    #+#             */
/*   Updated: 2023/11/24 11:55:24 by talhaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int ft_printf(char const *str, ...)
{
    int         i;

    i = 0;
    va_list(args);
    va_start(args, str);
    while (str[i])
    {
        ft_putchar_fd(str[i], 1);
        if (str[i] == '%')
        {
            if (str[++i] == '%')
                str[i] = '%';
            if (str[++i] == 's')
                str + i = ft_putstr_fd(va_arg(args, char *), 1);
        }
    }
    va_end(args);
    return (i);
}