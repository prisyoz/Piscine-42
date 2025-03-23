#include <string.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}


/* #include <stdio.h>

int main(void)
{
    char source[] = "Hello,123+_ World!";
    char dest1[50];  // For strcpy
    char dest2[50];  // For ft_strcpy

	printf("Source: %s\n", source);
    strcpy(dest1, source);
    printf("strcpy: %s\n", dest1);

    ft_strcpy(dest2, source);
    printf("ft_strcpy: %s\n", dest2);
} */