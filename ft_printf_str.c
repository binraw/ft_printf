/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:36:54 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/27 14:14:04 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int ft_print_str(char *str)
{
    write(1, str, ft_strlen(str));
    return (ft_strlen(str));
}

// size_t ft_strlen(char *str)
// {
//     size_t  i;

//     i = 0;
//     while (str[i])
//     {
//         i++;
//     }
//     return (i);
//}
