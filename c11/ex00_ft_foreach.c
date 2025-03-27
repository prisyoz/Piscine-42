

// *tab - pointer to array
// length - number of elements in array
// (*f)(int) - function pointer that takes an int as arguement and returns void. applied to each element in the array

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	count;

	count = 0;
	while (count < length)
	{
		f(tab[count]);
		count++;
	}
	return ;
}




/* #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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


int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};

    ft_foreach(tab, 5, &ft_putnbr);
	write(1, "\n", 1);
	ft_foreach(tab, 4, &ft_putnbr);
	write(1, "\n", 1);
	ft_foreach(tab, 2, &ft_putnbr);
	write(1, "\n", 1);
	ft_foreach(tab, 0, &ft_putnbr);
	write(1, "\n", 1);
	ft_foreach(tab, -1, &ft_putnbr);
	write(1, "\n", 1);

    return (0);
} */