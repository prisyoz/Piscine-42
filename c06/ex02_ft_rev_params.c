
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

int	main(int argc, char **argv)
{
	int	count;

	if (argc < 2)
		return (0);
	count = argc -1;
	while (count > 0)
	{
		ft_putstr(argv[count]);
		write(1, "\n", 1);
		count--;
	}
	return (0);
}
