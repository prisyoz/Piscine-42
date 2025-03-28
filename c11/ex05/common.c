#include <unistd.h>

int	ft_atoi(char	*str)
{
	int count;
	int	sign;
	int nbr;

	count = 0;
	sign = 1;
	nbr = 0;
	while (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
	{
		count++;
	}
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <='9')
	{
		nbr = (nbr * 10) + (str[count] - '0');
		count++;
	}
	return (nbr * sign);
}

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

void	ft_putstr(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}