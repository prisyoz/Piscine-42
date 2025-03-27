#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <unistd.h>
# include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stock_str
{
	int	size;
	char	*str;
	char	*copy;
}	t_stock_str;

void	ft_show_tab(struct s_stock_str *par);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strcpy(char *str, int size);
int	ft_strlen(char *str);
void	ft_free(t_stock_str *arr, int count);
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif