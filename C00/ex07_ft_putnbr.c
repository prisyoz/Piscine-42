#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb;
	if (num == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
		return ;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar(num % 10 + '0');
}



/* #include <stdio.h>

int main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-520);
	write(1, "\n", 1);
} */
