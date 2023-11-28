/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:36:54 by rtruvelo          #+#    #+#             */
/*   Updated: 2023/11/28 13:37:11 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int ft_printf_str(char *str)
{
    if (!str)
    {
        write(1,"(null)",6);
        return (6);
    }
    write(1, str, ft_strlen(str));
    return (ft_strlen(str));
}

