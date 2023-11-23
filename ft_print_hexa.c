/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:51:51 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/23 17:07:30 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_hexa(int n, char format)
{
	const char str[] = "0123456789abcdef";
	const char maj[] = "0123456789ABCDEF";

	  
	if (n >= 16)
	{
		ft_print_hexa(n / 16, format);
		ft_print_hexa(n % 16 , format);
	}
	else
	{
		if (format == 'x');
		ft_print_num(str[n]);
		if (format == 'X');
		ft_print_num(maj[n]);
	}
}