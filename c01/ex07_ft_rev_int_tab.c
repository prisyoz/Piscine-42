//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*int main()
{
    int size;
    int arr[8] = {1, 2, 3, 4, 5, 10, 4, 7};
    int *tab;
    int i;
    
    i = 0;
    size = 8;
    tab = arr;
    
    ft_rev_int_tab(tab, size);
    
    for (i = 0; i < size; i++) 
    {
       printf("%d ", tab[i]);
    } 
}*/
