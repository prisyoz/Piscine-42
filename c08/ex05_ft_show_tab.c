
#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	count;

	count = 0;
	while (par[count].str != NULL)
	{
		ft_putstr(par[count].str);
		ft_putchar('\n');
		ft_putnbr(par[count].size);
		ft_putchar('\n');
		ft_putstr(par[count].copy);
		ft_putchar('\n');
		count++;
	}
}




/* // Function to print the struct array
void print_struct_array(t_stock_str *arr)
{
    int i = 0;
    if (!arr)
    {
        printf("NULL returned\n");
        return;
    }
    while (arr[i].str)
    {
        printf("Size: %d, Str: %s, Copy: %s\n", arr[i].size, arr[i].str, arr[i].copy);
        i++;
    }
}

// Main test function
int main()
{
    char *test1[] = {"Hello", "World", "Test"};
    char *test2[] = {""};  // Empty string test
    char *test3[] = {"  leading spaces", "trailing spaces  ", "  both  "};  // Spaces
    char *test4[] = {"!@#$%^&*()", "Special<>?{}|", "12345"};  // Special characters
    char *test5[] = {"A very long string that might take a lot of memory to test the limits of the system."};  // Long string
    char *test6[] = {"Mixed123", "123Numbers", "OnlyNumbers123456"};  // Mixed alphanumeric
    char *test7[] = {NULL};  // NULL input (invalid case)

    printf("Test 1: Normal Strings\n");
    print_struct_array(ft_strs_to_tab(3, test1));

    printf("\nTest 2: Empty String\n");
    print_struct_array(ft_strs_to_tab(1, test2));

    printf("\nTest 3: Strings with Spaces\n");
    print_struct_array(ft_strs_to_tab(3, test3));

    printf("\nTest 4: Special Characters\n");
    print_struct_array(ft_strs_to_tab(3, test4));

    printf("\nTest 5: Long String\n");
    print_struct_array(ft_strs_to_tab(1, test5));

    printf("\nTest 6: Mixed Alphanumeric\n");
    print_struct_array(ft_strs_to_tab(3, test6));

    printf("\nTest 7: NULL Input\n");
    print_struct_array(ft_strs_to_tab(0, test7));

    return 0;
} */



//Expected output

/* Test 1: Normal Strings
Size: 5, Str: Hello, Copy: Hello
Size: 5, Str: World, Copy: World
Size: 4, Str: Test, Copy: Test

Test 2: Empty String
Size: 0, Str: , Copy: 

Test 3: Strings with Spaces
Size: 16, Str:   leading spaces, Copy:   leading spaces
Size: 17, Str: trailing spaces  , Copy: trailing spaces  
Size: 8, Str:   both  , Copy:   both  

Test 4: Special Characters
Size: 10, Str: !@#$%^&*(), Copy: !@#$%^&*()
Size: 13, Str: Special<>?{}|, Copy: Special<>?{}|
Size: 5, Str: 12345, Copy: 12345

Test 5: Long String
Size: 84, Str: A very long string that might take a lot of memory to test the limits of the system., Copy: A very long string that might take a lot of memory to test the limits of the system.

Test 6: Mixed Alphanumeric
Size: 8, Str: Mixed123, Copy: Mixed123
Size: 10, Str: 123Numbers, Copy: 123Numbers
Size: 17, Str: OnlyNumbers123456, Copy: OnlyNumbers123456 

Test 7: NULL Input
NULL returned
 */