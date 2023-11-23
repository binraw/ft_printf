/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:52:03 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/23 16:18:22 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft/libft.h"

int 	ft_print_num(int n)
{
	int	number;
	char	*str;

	number = 0;
	str = ft_atoi(n);
	number = ft_print_str(str);
	free(str);
	return (ft_strlen(number));
}