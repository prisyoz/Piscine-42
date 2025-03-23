
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 31 && str[count] <= 126)
			ft_putchar(str[count]);
		else
		{
			ft_putchar('\\');
			print_hex(str[count]);
		}
		count++;
	}
}


/* #include <stdio.h>

int	main()
{
	ft_putstr_non_printable("Coucou\ntu \v test\b vas !@# \r ~ \t bien a\fsdf?");
} */