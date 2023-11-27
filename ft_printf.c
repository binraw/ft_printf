/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:17:12 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/27 14:13:46 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

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
    else if (c == 'd' || c == 'i')
        print_len += ft_print_num(va_arg(ap, int));
    else if (c == 'x' || c == 'X')
		print_len += ft_print_hexa(va_arg(ap, int),c);
    else if (c == 'u')
        print_len += ft_print_num(va_arg(ap, unsigned int));
    else if (c == '%')
        print_len += write(1, "%", 1);
    else if (c == 'p')
        print_len += ft_print_hexa(va_arg(ap, int), c);
    return (print_len);

}

int ft_printf(const char *s, ...)
{
    va_list ap;
    int     i;
    int     print_len;
    
    i = 0;
    print_len = 0;
    if (!s)
        return (0);
    va_start(ap, s);
    while (s[i])
    {
        if (s[i] == '%')
        {
            print_len += ft_print_format(ap, s[i + 1]);
            i++;
        }
        else
        {
            print_len += write(1,&s[i],1);
            i++;
        }
    }
    va_end(ap);
    return (i);
}

// int main(void)
// {
//     ft_printf("%d",1200);
// //     printf("%x",12000000000);
// }