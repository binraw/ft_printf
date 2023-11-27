/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:52:03 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/27 16:10:34 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"


static size_t	ft_int_len(int number);
// int 	ft_printf_num(int n)
// {
// 	int	number;
// 	char	*str;

// 	number = 0;
// 	str = ft_itoa(n);
// 	ft_printf_str(str);
// 	number = ft_strlen(str);
// 	free(str);
// 	return (number);
// }

int 	ft_printf_num(int n)
{
	int	number;

	number = 0;
	ft_putnbr_fd(n, 1);
	number = ft_int_len(n);
	

	return (number);
}

static size_t	ft_int_len(int number)
{
	size_t	y;

	y = 0;
	if (number != 0)
	{
		while (number > 0)
		{
			number = number / 10;
			y++;
		}
	}
	else if (number == 0)
		y++;
	return (y);
}

// #include <stdio.h>
// int main(void)
// {
// 	// printf("%d\n", ft_print_hexa(10));
// 	printf("%d", ft_print_num(-11000));
// 	write(1, "\n",1);
// }