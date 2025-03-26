
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char	*src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
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

char	*ft_strdup(char *src)
{
	char	*dest;

	if (!src)
		return (NULL);
	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

//returns a pointer to a new string which is a duplicate of the string s.
//memory for new string malloc(), then free()
//success - returns pointer to duplicated string
//insufficient memory - NULL, errno set to indicate cause of error

// #include<stdio.h>

// int main()
// {
//     printf("strdup: %s\n", "123");
// 	printf("ftstrdup: %s\n", ft_strdup("123"));
// }