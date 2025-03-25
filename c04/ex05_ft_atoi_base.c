/* #include <stdio.h>

//valid arguments
int	is_valid(char	*base)
{
	int	count;
	int	count2;

	count = 0;
	while (base[count] != '\0')
	{
		if (base[count] == '+' || base[count] == '-' || base[count] == ' ')
			return (0);
		count++;
	}
	if (count < 2)
		return (0);
	count = 0;
	while (base[count] != '\0')
	{
		count2 = count +1;
		while (base[count2] != '\0')
		{
			if (base[count] == base[count2])
				return (0);
			count2++;
		}
		count++;
		
	}
	return (count);
}
//check polarity and trailing space
int	sp_polar(char	*str)
{
	int	count;
	int	sign;

	count = 0;
	sign = 1;
	while (str[count] != '\0' && (str[count] == 32 || (str[count] >= 9 &&  str[count] <= 13)))
	{
		count++;
	}
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	return (sign);
}

/* int	ft_atoi(char	*str)
{
	int	count;
	int	sign;
	int	nbr;

	count = 0;
	sign = 1;
	nbr = 0;
	while (str[count] == 32 || (str[count] >= 9 && str[count] < 13))
	{
		count++;
	}
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		nbr = (nbr * 10) + (str[count] - '0');
		count++;
	}
	return (nbr * sign);
}

//Convert interger to a string representation in the given base
/* void	print_base(int nbr, char	*base, int	base_length)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_length)
	{
		print_base(nbr / base_length, base, base_length);
	}
} 

int	ft_atoi_base(char	*str, char	*base)
{
	int base_length;
	int	sign;
	int	value;
	int	count;
	int	result;

	sign = 1;
	result = 0;
	base_length = is_valid(base);
	if (!base_length)
		return (0);
	sign = sp_polar(str);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;

	while (*str == '+' || *str == '-')
		str++;
	
	//Convert string to integer based on base
	while (*str)
	{
		value = -1;
		count = 0;

		// Find the index of current character in the base
		while (count < base_length)
		{
			if (base[count] == *str)
			{
				value = count;
				break ;
			}
			count++;
		}
		// If character not in base, break
		if (value == -1)
			break ;
		result = result * base_length + value;
		str++;
	}
	printf("Base Length: %d\n", base_length);
	printf("Sign: %d\n", sign);
	printf("Result: %d\n", result);
	return (result * sign);
	

}


#include <stdio.h>
#include <unistd.h>

int main()
{
    char *binary = "01";
    char *decimal = "0123456789";
    char *hexadeci = "0123456789ABCDEF";
    char *octal = "poneyvif";

    int result_bin = ft_atoi_base("42", binary);  // Convert to binary
    int result_dec = ft_atoi_base("42", decimal);  // Convert to decimal
    int result_hex = ft_atoi_base("42", hexadeci);  // Convert to hexadecimal
    int result_oct = ft_atoi_base("42", octal);  // Convert to custom base




    // Printing the results
    printf("Binary: %d\n", result_bin);    // Print binary result
    printf("Decimal: %d\n", result_dec);   // Print decimal result
    printf("Hexadecimal: %d\n", result_hex); // Print hexadecimal result
    printf("Custom Base (octal): %d\n", result_oct); // Print custom base result

    return 0;
} */

#include <stdio.h>

// Function to validate the base string
int is_valid_base(char *base)
{
    int count = 0;
    int count2;

    // Check for invalid base characters
    while (base[count] != '\0')
    {
        if (base[count] == '+' || base[count] == '-' || base[count] == ' ')
            return 0;  // Base contains invalid characters (+, -, or spaces)

        count2 = count + 1;
        while (base[count2] != '\0')
        {
            if (base[count] == base[count2])  // Duplicate characters in base
                return 0;
            count2++;
        }
        count++;
    }
    return count >= 2 ? 1 : 0;  // Base must have at least 2 characters
}

// Function to convert a string to an integer based on a given base
int ft_atoi_base(char *str, char *base)
{
    int base_length = 0;
    int sign = 1;
    int result = 0;
    int i;

    // Validate the base
    if (!is_valid_base(base))
        return 0;

    // Calculate base length
    while (base[base_length] != '\0')
        base_length++;

    // Handle leading spaces
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    // Handle sign
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    // Convert the string to an integer based on the base
    while (*str)
    {
        int value = -1;
        for (i = 0; i < base_length; i++)
        {
            if (base[i] == *str)
            {
                value = i;
                break;
            }
        }

        // If character is not in the base, stop the conversion
        if (value == -1)
            break;

        result = result * base_length + value;
        str++;
    }

    return result * sign;
}

// Function to convert an integer to a string based on a given base
void ft_putnbr_base(int nbr, char *base)
{
    int base_length = 0;
    int result[32];  // to store digits in reverse order
    int index = 0;
    
    // Calculate base length
    while (base[base_length] != '\0')
        base_length++;

    // Handle 0 case
    if (nbr == 0)
    {
        putchar(base[0]);
        return;
    }

    // Handle negative numbers
    if (nbr < 0)
    {
        putchar('-');
        nbr = -nbr;
    }

    // Convert number to the string representation in the base
    while (nbr > 0)
    {
        result[index++] = nbr % base_length;
        nbr = nbr / base_length;
    }

    // Print the number in reverse order
    while (index-- > 0)
    {
        putchar(base[result[index]]);
    }
}

// Function to convert integer to a string based on the given base
char *int_to_base_string(int num, char *base)
{
    static char str[33];  // To hold the result string, assuming 32-bit integers
    int base_length = 0;
    int index = 0;

    // Calculate base length
    while (base[base_length] != '\0')
        base_length++;

    // Handle 0 case
    if (num == 0)
    {
        str[index++] = base[0];
        str[index] = '\0';
        return str;
    }

    // Handle negative numbers
    if (num < 0)
    {
        str[index++] = '-';
        num = -num;
    }

    // Convert number to the string representation in the base
    while (num > 0)
    {
        str[index++] = base[num % base_length];
        num = num / base_length;
    }

    str[index] = '\0';

    // Reverse the string
    int i = 0, j = index - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    return str;
}

int main()
{
    // Test cases
    char *binary = "01";
    char *decimal = "0123456789";
    char *hexadecimal = "0123456789ABCDEF";
    char *custom_base = "poneyvif";  // Custom base (poneyvif = 8 symbols)

    // Convert the number 42 to different bases
    int result_bin = ft_atoi_base("101010", binary);  // Convert binary "101010" to decimal
    int result_dec = ft_atoi_base("42", decimal);    // Convert decimal "42" to integer
    int result_hex = ft_atoi_base("2A", hexadecimal); // Convert hexadecimal "2A" to integer
    int result_oct = ft_atoi_base("vfi", custom_base); // Convert custom base "vfi" to integer

    // Print the results
    printf("Binary to decimal: %d\n", result_bin);      // Print decimal from binary
    printf("Decimal to decimal: %d\n", result_dec);    // Print decimal from decimal
    printf("Hexadecimal to decimal: %d\n", result_hex); // Print decimal from hexadecimal
    printf("Custom Base (poneyvif) to decimal: %d\n", result_oct); // Print decimal from custom base

    // Convert 42 to binary, hexadecimal, and custom base representation
    printf("42 in Binary: %s\n", int_to_base_string(42, binary));      // Print 42 in binary
    printf("42 in Hexadecimal: %s\n", int_to_base_string(42, hexadecimal)); // Print 42 in hexadecimal
    printf("42 in Custom Base (poneyvif): %s\n", int_to_base_string(42, custom_base)); // Print 42 in custom base

    return 0;
}
