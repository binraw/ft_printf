/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putmem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:45:03 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/27 15:50:43 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putmem(int n)
{
	const char str[] = "0123456789abcdef";
    int     i;

    i = 0;
	if (n >= 16)
	{
		ft_printf_putmem(n / 16);
		ft_printf_putmem(n % 16);
	}
	else
	{
        if(i == 0)
        {
            write(1, "0x", 1);
            i = 2;
        }
        
        write(1, &str[n], 1);
        i++;
        
	}
	return (i);
}