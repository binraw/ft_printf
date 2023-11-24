/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:51:51 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/24 15:14:38 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_print_hexa(int n, char format)
{
	const char str[] = "0123456789abcdef";
	const char maj[] = "0123456789ABCDEF";
	int result;

	result = 0;
	if (n >= 16)
	{
		ft_print_hexa(n / 16, format);
		ft_print_hexa(n % 16 , format);
	}
	else
	{
		if (format == 'x');
		result += ft_print_num(str[n]);
		if (format == 'X');
		result += ft_print_num(maj[n]);
		// if (format == 'p')
		// ft_print_num("0x" + str[n]);
		
	}
	return (result);
}

// int main(void)
// {
// 	printf("%d\n", ft_print_hexa(10));
// }