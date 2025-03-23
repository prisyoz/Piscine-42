
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	count;
	int	count2;

	count = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[count])
	{
		if (base[count] == '+' || base[count] == '-')
			return (0);
		count2 = count + 1;
		while (base[count2])
		{
			if (base[count] == base[count2])
				return (0);
			count2++;
		}
		count++;
	}
	return (1);
}

void	check_base(unsigned int nbr, char *base, unsigned int base_length)
{
	int	div;

	div = 1;
	while (nbr / div >= base_length)
	{
		div *= base_length;
	}
	while (div > 0)
	{
		ft_putchar(base[(nbr / div) % base_length]);
		div /= base_length;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_length;

	base_length = 0;
	if (is_valid_base(base) == 0)
		return ;
	while (base[base_length])
	{
		base_length++;
	}
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	check_base(nbr, base, base_length);
}

/* 
int	main()
{
	char *binary = "01";
	char *decimal = "0123456789";
	char *hexadecimal = "0123456789ABCDEF";
	char *octal = "poneyvif";

	ft_putnbr_base(51456, binary);
	write(1, "\n", 1);
	ft_putnbr_base(51456, decimal);
	write(1, "\n", 1);
	ft_putnbr_base(51456, hexadecimal);
	write(1, "\n", 1);
	ft_putnbr_base(51456, octal);
	write(1, "\n", 1);
	write(1, "\n", 1);

	ft_putnbr_base(-51456, binary);
	write(1, "\n", 1);
	ft_putnbr_base(-51456, decimal);
	write(1, "\n", 1);
	ft_putnbr_base(-51456, hexadecimal);
	write(1, "\n", 1);
	ft_putnbr_base(-51456, octal);
	write(1, "\n", 1);

	return 0;
} */
