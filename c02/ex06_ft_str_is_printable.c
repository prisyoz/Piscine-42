
#include <string.h>

int	ft_str_is_printable(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 126)
			return (0);
		count++;
	}
	return (1);
}

/* #include <stdio.h>

int main()
{
    printf("1: 1 %d\n", ft_str_is_printable("H3llo"));
    printf("2: 1 %d\n", ft_str_is_printable("heya"));
    printf("3: 0 %d\n", ft_str_is_printable("123\nhellow"));
    printf("4: 1 %d\n", ft_str_is_printable(""));
    printf("5: 0 %d\n", ft_str_is_printable("1234\t!@"));
    printf("5: 1 %d\n", ft_str_is_printable("EKWERL"));
    printf("5: 1 %d\n", ft_str_is_printable(" EKWERL"));
    printf("3: 1 %d\n", ft_str_is_printable("123 hellow~"));
} */