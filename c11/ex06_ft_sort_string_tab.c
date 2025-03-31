#include <stdio.h>

void    ft_swap(char **a, char **b)
{
    char *temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int    ft_strcmp(char *s1, char *s2)
{
    int count;
    
    count = 0;
    while (*s1 && (*s1 == *s2))
    {
        s1++;
		s2++;
    }
    return (*s1 - *s2);
}


void    ft_sort_string_tab(char **tab)
{
    int count;
    int count2;
    int result;
    
    count = 0;
    result = 0;
    
    // strcmp of both strings whether it returns 0 or + or -ve.
    
    while (tab[count] != NULL)
    {
        count2 = count +1;
		while (tab[count2] != NULL)
		{
			result = ft_strcmp(tab[count], tab[count2]);
			if (result > 0)
				ft_swap(&tab[count], &tab[count2]);
			count2++;
		}
		count++;
    }
}


/* #include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int main(void)
{
    // Example of an array of strings
    char *tab[6] = {"banana", "apple", "grape", "cherry", "date", NULL};[]

    // Print the array before sorting
    ft_putstr("Before sorting:\n");
    int i = 0;
    while (tab[i] != NULL)
    {
        ft_putstr(tab[i]);
        ft_putchar('\n');
        i++;
    }

    // Sort the array
    ft_sort_string_tab(tab);

    // Print the array after sorting
    ft_putstr("\nAfter sorting:\n");
    i = 0;
    while (tab[i] != NULL)
    {
        ft_putstr(tab[i]);
        ft_putchar('\n');
        i++;
    }

    return 0;
} */