/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:52:03 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/28 10:49:40 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"


static size_t	ft_int_len(int number);
void	ft_putnbr_unsigned_fd(unsigned int n, int fd);
static size_t	ft_unsigned_int_len(unsigned int number);
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

unsigned int  	ft_printf_num_unsigned(unsigned int n)
{
	unsigned int	number;

	number = 0;
	ft_putnbr_unsigned_fd(n, 1);
	number = ft_unsigned_int_len(n);
	

	return (number);
}

void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	unsigned int	number;

		if (n >= 10)
		{
			ft_putnbr_unsigned_fd(n / 10, fd);
			ft_putnbr_unsigned_fd(n % 10, fd);
		}
		else
		{
			number = '0' + n;
			write(fd, &number, 1);
		}
	}
static size_t	ft_unsigned_int_len(unsigned int number)
{
	size_t	y;

	y = 0;
	if (number < 0)
	{
		number *= -1;
	}
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

static size_t	ft_int_len(int number)
{
	size_t	y;

	y = 0;
	if (number == -2147483648)
		return (11);
	if (number < 0)
	{
		number *= -1;
		y++;
	}
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