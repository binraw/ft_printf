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





int	ft_print_hexa(int n, char format);
int ft_print_format(va_list ap, int c);
int ft_printf(const char *s, ...);
int ft_print_str(char *str);
int 	ft_print_num(int n);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *source);



# endif