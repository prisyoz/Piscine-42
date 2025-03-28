

int	ft_any(char **tab, int(*f)(char*))
{
	int	count;
	
	count = 0;
	while (tab[count])
	{
		if (f((&*tab)[count]) != 0)
			return (1);
		count++;
	}
	return (0);
}

/* #include <unistd.h>

// Function to check if a string contains 'a'
int contains_a(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == 'a')
            return (1);
        i++;
    }
    return (0);
}

// Function to test ft_any
int main(void)
{
    char *tab[] = {"hello", "world", "test", "apple", NULL};
	char *fab[] = {NULL};

    if (ft_any(tab, &contains_a))
        write(1, "At least one string contains 'a'\n", 33);
    else
        write(1, "No string contains 'a'\n", 24);

	if (ft_any(fab, &contains_a))
        write(1, "At least one string contains 'a'\n", 33);
    else
        write(1, "No string contains 'a'\n", 24);

    return (0);
} */
