
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

//check if character in charset
int	in_sep(char c, char *charset)
{
	int	count;

	count = 0;
	while (charset[count])
	{
		if (c == charset[count])
			return (1);
		count++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*str)
	{
		if (!in_sep(*str, charset) && word == 0)
		{
			word = 1;
			count++;
		}
		else if (in_sep(*str, charset))
			word = 0;
		str++;
	}
	return (count);
}

char	*malloc_word(char *start, int len)
{
	char	*word;
	int		count;

	count = 0;
	word = malloc(len +1);
	if (word == NULL)
		return (NULL);
	while (count < len)
	{
		word[count] = start[count];
		count++;
	}
	word[count] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		words;
	int		count;
	int		len;

	words = count_words(str, charset);
	count = 0;
	len = 0;
	arr = malloc(sizeof(char *) * (words +1));
	if (arr == NULL)
		return (NULL);
	while (*str)
	{
		if (!in_sep(*str, charset) && len++ == 0)
			arr[count] = (char *)str;
		if (((in_sep(*str, charset)) || !*(str +1)) && len > 0)
		{
			arr[count] = malloc_word(arr[count], len);
			count++;
			len = 0;
		}
		str++;
	}
	arr[count] = NULL;
	return (arr);
}

// #include <stdio.h>

// int main()
// {
//     char **result;
//     int i;

//     // Test case: String with multiple separators
//     char str[] = "Hello,Wor+ld! This-is a test.";
//     char charset[] = ",-!. ";

//     result = ft_split(str, charset);

//     // Print each word in the result array
//     printf("Splitting: \"%s\" using charset: \"%s\"\n\n", str, charset);
//     i = 0;
//     while (result[i])
//     {
//         printf("Word %d: %s\n", i + 1, result[i]);
//         free(result[i]); // Free each word after printing
//         i++;
//     }
//     free(result); // Free the main array

//     return (0);
// }