
#include <string.h>

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	if (size > 0)
	{
		while (src[count] != '\0' && count < size - 1)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* #include <stdio.h>

int main()
{
	char src[] = "TESTSTRINGabc";
	char dest[20];
	
	printf("srclength: %d\n", ft_strlcpy(dest, src, 5));
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return 0;
} */