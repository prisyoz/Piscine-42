//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
    int a, b;
    int div, mod;
    
    a = 45;
    b = 4;

    ft_div_mod(a, b, &div, &mod);

    printf("divptr: %d\n", div);
    printf("modptr: %d\n", mod);
    return 0;
}*/
