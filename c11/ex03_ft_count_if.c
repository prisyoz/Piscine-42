#include <stdlib.h>

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	count;
	int	result;

	count = 0;
	result = 0;
	while (count < length)
	{
		if (f(tab[count]) != 0)
			result++;
		count++;
	}
	return (result);
}


/* #include <stdio.h>

int has_a(char *str)
{
    if (str == NULL)
        return (0);  // If the string is NULL, return 0.

    while (*str)
    {
        if (*str == 'a')
            return (1);  // Found 'a', return 1.
        str++;
    }
    return (0);  // 'a' not found, return 0.
}


int main(void)
{
    char *tab[] = {"apple", "banana", "cherry", "hello", "world"};
    int count = ft_count_if(tab, 2, &has_a);
    printf("Count: %d\n", count);

    return 0;
} */
