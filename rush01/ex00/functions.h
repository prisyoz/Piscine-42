
#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(unsigned int nbr);
int		ft_strlen(char	*str);
void	ft_putstr(char	*str);
int		*allocate_map(void);
int		check(int argc, char **argv);
int		*get_numbers(char	*str);
void	print_map(int map[4][4]);
void	init_map(int map[4][4]);
int		check_doubles(int map[4][4], int pos);
int		col_up(int map[4][4], int pos, int entry[16]);
int		col_down(int map[4][4], int pos, int entry[16]);
int		row_left(int map[4][4], int pos, int entry[16]);
int		row_right(int map[4][4], int pos, int entry[16]);
int		check_cond(int map[4][4], int pos, int entry[16]);
int		solve(int map[4][4], int entry[16], int pos);

#endif /* FUNCTIONS_H */