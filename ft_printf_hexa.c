/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:51:51 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/27 15:42:59 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_printf_hexa(int n, char format)
{
	const char str[] = "0123456789abcdef";
	const char maj[] = "0123456789ABCDEF";
	int result;

	result = 0;
	if (n >= 16)
	{
		ft_printf_hexa(n / 16, format);
		ft_printf_hexa(n % 16 , format);
	}
	else
	{
		if (format == 'x')
		{
		result += 1;
		write(1, &str[n], 1);
		}
		if (format == 'X')
		{
		result += 1;
		write(1, &maj[n], 1);
		}
	}
	return (result);
}

// int main(void)
// {
// 	// printf("%d\n", ft_print_hexa(10));
// 	ft_print_hexa(110,'X');
// 	write(1, "\n",1);
// }