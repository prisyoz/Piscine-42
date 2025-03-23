
#include <string.h>

int	ft_str_is_alpha(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 65 || (str[count] > 90 && str[count] < 97)
				|| str[count] > 122))
			return (0);
		count++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
    printf("1: 0 %d\n", ft_str_is_alpha("H3llo"));
    printf("2: 1 %d\n", ft_str_is_alpha("heya"));
    printf("3: 0 %d\n", ft_str_is_alpha("123helLow"));
    printf("4: 1 %d\n", ft_str_is_alpha(""));
}