
int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	count;
	int	ascend;
	int	descend;
	
	count = 0;
	ascend = 1;
	descend = 1;
	if (length <= 1)
		return (1);
	while (count < length - 1)
	{
		if (f(tab[count], tab[count +1]) >= 0)
			ascend = 0;
		if (f(tab[count], tab[count +1]) < 0)
			descend = 0;
		count++;
	}
	return (ascend || descend);
}

/* #include <stdio.h>

int compare(int a, int b)
{
    return (b - a); // Returns negative if b < a, 0 if equal, positive if b > a
}

int main(void)
{
    int sorted_asc[] = {1, 2, 3, 4, 5};
    int sorted_desc[] = {5, 4, 3, 2, 1};
    int unsorted[] = {1, 3, 2, 5, 4};
    int single_element[] = {42};

    printf("Sorted (asc): %d\n", ft_is_sort(sorted_asc, 5, &compare)); // 1
    printf("Sorted (desc): %d\n", ft_is_sort(sorted_desc, 5, &compare)); // 1
    printf("Unsorted: %d\n", ft_is_sort(unsorted, 5, &compare)); // 0
    printf("Single element: %d\n", ft_is_sort(single_element, 1, &compare)); // 1

    return 0;
}
 */