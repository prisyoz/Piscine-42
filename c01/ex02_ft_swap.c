//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main()
{
    int c, d;
    int *a, *b;

    c = 42;
    d = 60;
    
    a = &c;
    b = &d;

    printf("before: %d\n", c);
    printf("before: %p\n", a);
    printf("before: %d\n", d);
    printf("before: %p\n", b);
    ft_swap(a, b);
    printf("after: %d\n", c);
    printf("after: %p\n", a);
    printf("after: %d\n", d);
    printf("after: %p\n", a);
}*/
