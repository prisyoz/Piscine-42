
#include <string.h>

#define SIZE 100

char	*ft_strcat(char	*dest, char	*src)
{
	int	dest_count;
	int	src_count;

	dest_count = 0;
	src_count = 0;
	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	while (src[src_count] != '\0')
	{
		dest[dest_count] = src[src_count];
		dest_count++;
		src_count++;
	}
	dest[dest_count] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main()
{
	char	src[14] = " and goodbye!";
	char	dest[10] = "Thank you";
	//addition of two strings
	//dest string must have enough space for the result
	//returns the source

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("newdest: %s\n", ft_strcat(dest, src));
} */
