/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:52:03 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/27 14:13:56 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

int 	ft_print_num(int n)
{
	int	number;
	char	*str;

	number = 0;
	str = ft_itoa(n);
	ft_print_str(str);
	free(str);
	return (number);
}