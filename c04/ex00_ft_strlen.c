
#include <string.h>

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("str_length: %d\n", ft_strlen("itsalmosthalf"));
// 	printf("str_length: %ld\n", strlen("itsalmosthalf"));
// }