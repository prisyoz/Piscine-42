
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/* #include <stdio.h>

int	main()
{
	ft_putstr("A part of the world!");
} */
