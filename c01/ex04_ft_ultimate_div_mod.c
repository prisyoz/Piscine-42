//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}

/*int main()
{
    int i;
    int j;

    i = 54;
    j = 5;

    ft_ultimate_div_mod(&i, &j);
    printf("%d, %d\n", i, j);
}*/
