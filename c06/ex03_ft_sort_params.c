
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

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (s1[count] - s2[count]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char **argv)
{
	int	params;
	int	count2;

	params = 1;
	if (argc <= 1)
		return (0);
	while (params < argc -1)
	{
		count2 = 1;
		while (count2 < argc -1)
		{
			if (ft_strcmp(argv[count2], argv[count2 +1]) > 0)
				ft_swap(&argv[count2], &argv[count2 +1]);
			count2++;
		}
		params++;
	}
	params = 1;
	while (params < argc)
	{
		ft_putstr(argv[params]);
		ft_putchar('\n');
		params++;
	}
	return (0);
}
