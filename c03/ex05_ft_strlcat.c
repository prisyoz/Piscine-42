
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	dest_count;
	unsigned int	src_count;

	dest_count = 0;
	src_count = 0;
	while (dest_count < size && dest[dest_count] != '\0')
	{
		dest_count++;
	}
	if (size <= dest_count)
	{
		return (size + ft_strlen(src));
	}
	while (src[src_count] != '\0' && dest_count < size - 1)
	{
		dest[dest_count] = src[src_count];
		dest_count++;
		src_count++;
	}
	dest[dest_count] = '\0';
	return (dest_count + ft_strlen(&src[src_count]));
}

/* #include <stdio.h>
#include <bsd/strings.h> 

int main()
{
    // Test case variables
    char dest1[30] = "Hello";
    char src1[] = " World!";
    unsigned int size1 = 15; 

    char dest2[30] = "Hello";
    char src2[] = " World!";
    unsigned int size2 = 15;

    // Testing ft_strlcat
    unsigned int result1 = ft_strlcat(dest1, src1, size1);
    printf("ft_strlcat result: %u\n", result1);
    printf("ft_strlcat dest: %s\n\n", dest1);

    // Testing library strlcat
    unsigned int result2 = strlcat(dest2, src2, size2);
    printf("strlcat result: %u\n", result2);
    printf("strlcat dest: %s\n\n", dest2);

	return 0;
} */