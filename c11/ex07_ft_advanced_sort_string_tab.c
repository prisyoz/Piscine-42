

void    ft_swap(char **a, char **b)
{
    char *temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

void    ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
    int count;
    int count2;
    
    count = 0;
    while (tab[count])
    {
        count2 = count +1;
        while (tab[count2])
        {
            if (cmp(tab[count], tab[count2]) > 0)
                ft_swap(&tab[count], &tab[count2]);
			count2++;
        }
		count++;
    }
}




/* int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])  // Compare until we reach different characters or the end of either string
    {
        i++;
    }
    return (s1[i] - s2[i]);  // Return the difference of the first differing characters
}

#include <stdio.h>

int main() {
    char *tab[] = {"Banana", "apple", "Cherry", "date", NULL};  // Mixed case

    printf("Before sorting:\n");
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);

    ft_advanced_sort_string_tab(tab, my_strcmp);
    
    printf("\nAfter sorting:\n");
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);

    return 0;
}


int main() {
    char *tab[] = {"banana", "#apple", "grape", "cherry", "%date", NULL};  // Special characters

    printf("Before sorting:\n");
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);

    ft_advanced_sort_string_tab(tab, my_strcmp);
    
    printf("\nAfter sorting:\n");
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);

    return 0;
}

int main() {
    char *tab[] = {"banana", "apple", "cherry", "date", "grape", "kiwi", "melon", "pear", "orange", "peach", NULL};  // Larger array

    printf("Before sorting:\n");
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);

    ft_advanced_sort_string_tab(tab, my_strcmp);
    
    printf("\nAfter sorting:\n");
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);

    return 0;
}

int main() {
    char *tab[] = {"banana", "", "grape", "apple", "", "date", NULL};  // Array with empty strings

    printf("Before sorting:\n");
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);

    ft_advanced_sort_string_tab(tab, my_strcmp);
    
    printf("\nAfter sorting:\n");
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);

    return 0;
} */



