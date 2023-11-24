#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdlib.h>
#include "libft/libft.h"




void	ft_print_hexa(int n, char format);
int ft_print_format(va_list ap, int c);
int ft_printf(const char *s, ...);
int ft_print_str(char *str);
int 	ft_print_num(int n);

# endif