
#include <string.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int	src_count;
	unsigned int	dest_count;

	src_count = 0;
	dest_count = 0;
	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	while (src[src_count] != '\0' && src_count < nb)
	{
		dest[dest_count] = src[src_count];
		dest_count++;
		src_count++;
	}
	dest[dest_count] = '\0';
	return (dest);
}

/* #include <stdio.h>

int main()
{
	char	s1[20] = "I hope this does!";
	char	s2[100] = "Does this work?\n";

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("new string: %s\n", ft_strncat(s2, s1, 5));
	return (0);
} */