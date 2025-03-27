
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	count;
	int	*result;

	count = 0;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (NULL);
	while (count < length)
	{
		result[count] = f(tab[count]);
		count++;
	}
	return (result);
}









/* #include <unistd.h>

int double_value(int n)
{
    return n * 2;
}


// Function to output a number using write
void	ft_putchar(char c)
{
    write(1, &c, 1);
}

// Function to output an integer using write
void	ft_putnbr(int nb)
{
    long int	num;

    num = nb;
    if (num == -2147483648)
    {
        write(1, "-", 1);
        write(1, "2147483648", 10);
        return ;
    }
    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if (num > 9)
    {
        ft_putnbr(num / 10);
    }
    ft_putchar(num % 10 + '0');
}

// Main function to test ft_map
int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int length = 5;

    // Apply ft_map and get the result array with doubled values
    int *result = ft_map(tab, length, &double_value);

    // Check if memory allocation was successful
    if (!result)
    {
        write(1, "Memory allocation failed\n", 24);
        return (1);
    }

    // Print the result of each value in the result array
    for (int i = 0; i < length; i++)
    {
        ft_putnbr(result[i]);   // Print each number
        ft_putchar('\n');       // Print a new line after each number
    }

    // Free the allocated memory for the result array
    free(result);

    return 0;
} */