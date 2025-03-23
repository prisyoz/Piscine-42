
#include <string.h>

char	*ft_strlowcase(char	*str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		count++;
	}
	return (str);
}

/* #include <stdio.h>

int main()
{
    char str[] = "CAN WE DO IT? $#@%^&#@";
    printf("Original string: %s\n", str);
    printf("Lowercase string: %s\n", ft_strlowcase(str));
    return 0;
} */