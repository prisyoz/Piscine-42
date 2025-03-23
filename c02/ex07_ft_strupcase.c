
#include <string.h>

char	*ft_strupcase(char	*str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] -= 32;
		count++;
	}
	return (str);
}

/* #include <stdio.h>

int main()
{
    char str[] = "Does this work?3432%$#%";
    printf("Original string: %s\n", str);
    printf("Uppercase string: %s\n", ft_strupcase(str));
    return 0;
} */