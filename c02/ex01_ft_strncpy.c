#include <string.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && (src[count] != '\0'))
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/* #include <stdio.h>

int main(void)
{
    char source[] = "Hello,123+_ World!";
    char dest1[50];  // For strncpy
    char dest2[50];  // For ft_strncpy

	printf("Source: %s\n", source);
    strncpy(dest1, source, 5);
    printf("strcpy: %s\n", dest1);

    ft_strncpy(dest2, source, 5);
    printf("ft_strcpy: %s\n", dest2);

	char dest3[5];  // For strncpy
    char dest4[5];  // For ft_strncpy

	printf("Source: %s\n", source);
    strncpy(dest3, source, 0);
    printf("strcpy: %s\n", dest1);

    ft_strncpy(dest4, source, 0);
    printf("ft_strcpy: %s\n", dest2);
} */