
#ifndef DO_OP_H
# define DO_OP_H

#include <unistd.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

int	ft_atoi(char	*str);
int add(int a, int b);
int	subtract(int a, int b);
int	multiply(int a, int b);
int	divide(int a, int b);
int modulo(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char	*str);

#endif