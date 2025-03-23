#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				write(1, (char []){a, b, c}, 3);
				if (a != 55 || b != 56 || c != 57)
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}


/* int	main(void)
{
	ft_print_comb();
} */