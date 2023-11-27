#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdlib.h>
#include "libft/libft.h"





int	ft_printf_hexa(int n, char format);
int ft_printf_format(va_list ap, int c);
int ft_printf(const char *s, ...);
int ft_printf_str(char *str);
int 	ft_printf_num(int n);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *source);
int ft_printf_char(int c);
int	ft_printf_putmem(int n);



# endif