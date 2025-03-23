
#include <string.h>

int	ft_str_is_numeric(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 48 || str[count] > 57)
			return (0);
		count++;
	}
	return (1);
}


/* include <stdio.h>

int main()
{
    ft_str_is_numeric("h3llo");
    ft_str_is_numeric("heya");
    ft_str_is_numeric("123hellow");
    printf("1: 0 %d\n", ft_str_is_numeric("h3llo"));
    printf("2: 0 %d\n", ft_str_is_numeric("heya"));
    printf("3: 0 %d\n", ft_str_is_numeric("123hellow"));
    printf("4: 1 %d\n", ft_str_is_numeric(""));
    printf("5: 1 %d\n", ft_str_is_numeric("1234"));
    printf("6: 0 %d\n", ft_str_is_numeric("1234!!"));
} */