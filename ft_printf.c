/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:17:12 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/24 10:49:58 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

int ft_print_char(int c)
{
    write(1, &c, 1);
    return (1);
}
int ft_print_format(va_list ap, int c)
{
    int print_len;

    print_len = 0;
    if (c == 'c')
        print_len += ft_print_char(va_arg(ap, int));
    else if (c == 's')
        print_len += ft_print_str(va_arg(ap, char *));
    else if (c == 'd')
        print_len += ft_print_num(va_arg(ap, int));
    else if (c == 'x' || c == 'X')
		print_len += ft_print_hexa(va_arg(ap, char),c);
    return (print_len);

}

int ft_printf(const char *s, ...)
{
    va_list ap;
    int     i;
    char    *str;
    int     print_len;
    
    i = 0;
    print_len = 0;
    str = s;
    if (!str)
        return (0);
    va_start(ap,str[i]);
    while (str[i] != NULL)
    {
        if (str[i] == '%')
        {
            print_len += ft_print_format(ap, str[i + 1]);
            i++;
        }
        else
        {
            print_len += write(1,&str[i],1);
            i++;
        }
    }
    va_end(ap);
    return (i);
}