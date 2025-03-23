
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
		write(1, "-2147483648", 11);
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
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}

/* #include <stdio.h>
#include <limits.h>

int	main()
{
	ft_putnbr(42);   // Output: "42"
	ft_putchar('\n');
	ft_putnbr(-42);  // Output: "-42"
	ft_putchar('\n');
	ft_putnbr(0);    // Output: "0"
	ft_putchar('\n');
	ft_putnbr(INT_MIN);  // Output: "2147483647"
	ft_putchar('\n');
	ft_putnbr(INT_MAX); // Output: "-2147483648"
} */
