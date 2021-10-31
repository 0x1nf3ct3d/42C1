
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *to_print, ...);
void	ft_putstr_pp(char *s, int *count);
void	ft_putnbr_p(int n, int *count);
void	ft_put_long_nbr(long int n, int *count);
char	*ft_ptraddr(unsigned long int value, unsigned long int base);
char	*ft_hexnbr(unsigned int value, unsigned int base);
void	ft_putchar_pp(char c, int *count);
char	*ft_str_toupper(char *c);


#endif
