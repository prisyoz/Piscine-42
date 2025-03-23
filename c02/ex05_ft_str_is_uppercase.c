
#include <string.h>

int	ft_str_is_uppercase(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 65 || str[count] > 90)
			return (0);
		count++;
	}
	return (1);
}

/* #include <stdio.h>

int main()
{
    printf("1: 0 %d\n", ft_str_is_uppercase("H3llo"));
    printf("2: 0 %d\n", ft_str_is_uppercase("heya"));
    printf("3: 0 %d\n", ft_str_is_uppercase("123hellow"));
    printf("4: 1 %d\n", ft_str_is_uppercase(""));
    printf("5: 0 %d\n", ft_str_is_uppercase("1234!@"));
    printf("5: 1 %d\n", ft_str_is_uppercase("EKWERL"));
} */