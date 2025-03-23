#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    ft_putchar(nb % 10 +'0');
}

void    ft_print_combn(int n)
{
    int digits[n];
    int count;

    count = 0;
    while (count < n)
    {
        digits[count] = count;
        count++;
    }
    while (digits[0] <= 9 - n)
    {
        count = 0;
        while (count < n)
        {
            ft_putnbr(digits[count] + 1);
            count++;
        }

        if (digits[0] < 9 - n + 1)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        count = n - 1;
        while (count >= 0 && digits[count] == 9 - (n - 1 - count))
        {
            count--;
        }
        if (count >= 0)
        {
            digits[count]++;
            while (count < n -1)
            {
                digits[count +1] = digits[count] +1;
                count++;
            }
        }
    }
    write(1, "\n", 1);
}


int main(void)
{
    ft_print_combn(9);
    ft_putchar('\n');
    ft_print_combn(8);
    ft_putchar('\n');
    ft_print_combn(7);
    ft_putchar('\n');
    ft_print_combn(6);
    ft_putchar('\n');
    ft_print_combn(5);
    ft_putchar('\n');
    ft_print_combn(4);
    ft_putchar('\n');
    ft_print_combn(3);
    ft_putchar('\n');
    ft_print_combn(2);
    ft_putchar('\n');
    ft_print_combn(1);
    ft_putchar('\n');
}