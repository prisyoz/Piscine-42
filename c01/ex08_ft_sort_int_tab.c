//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[(i + 1)])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

/*int main()
{
    int size;
    int i;
    int arr[5] = {0, 4, 2, 1, 3};
    int *tab;

    i = 0;
    size = 5;
    tab = arr;

 
    ft_sort_int_tab(tab, size);

    for (i = 0; i < size; i++) 
    {
       printf("%d ", tab[i]);
    }

}*/
