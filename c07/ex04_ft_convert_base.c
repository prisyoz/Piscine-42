#include <stdlib.h>

// 1. Check bases for validity
int	is_valid(char *base)
{
	int	count;
	int	count2;

	count = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[count] != '\0')
	{
		if (base[count] == '+' || base[count] == '-' || base[count] == ' ')
			return (0);
		count++;
	}
	while (base[count] != '\0')
	{
		count2 = count + 1;
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

//2. Convert nbr from base_from to integer
//2a. Check for signs and trailing spaces
int	sp_polar(char *str, int *index)
{
	int	sign;

	sign = 1;
	// Trailing spaces
	while (str[*index] == ' ' || (str[*index] >= 9 && str[*index] <= 13))
	{
		(*index)++;
	}
	// Signs
	while  (str[*index] == '+' || str[*index] == '-')
	{
		if (str[*index] == '-')
			sign *= -1;
		(*index)++;
	}
	return (sign);
}

// 2b. Check that character is inside the base
int	get_base(char c, char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		if (c == base[count])
			return (count);
		count++;
	}
	return (-1);
}

// 2c. convert str from base_from
int	ft_atoi_base(char *str, char *base)
{
	int base_length;
	int	sign;
	int	index;
	int	base_val;
	long int	result;

	index = 0;
	result = 0;
	base_length = is_valid(base);
	if (base_length < 2)
		return (0);
	sign = sp_polar(str, &index);
	while (str[index] != '\0')
	{
		base_val = get_base(str[index], base);

		//If invalid, stop conversion
		if (base_val == -1)
			break ;
		result = (result * base_length) + base_val;
		index++;
	}
	return (result * sign);
}

//3. Convert integer to base_to
char	*ft_putnbr_base(int nbr, char *base, int base_to_len)
{
	long int	nb;
	long int	temp_nbr;
	int			len;
	char		*result;

	nb = nbr;
	len = 0;
	result = 0;
	if (nbr <= 0)
		len = 1;
	temp_nbr = nb;
	if (nb < 0)
		nb = -nb;
	
	//get the total size needed
	while (temp_nbr != 0)
	{
		temp_nbr /= base_to_len;
		len++;
	}

	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = '\0';
	
	while (len > 0)
	{
		result[len -1] = base[nb % base_to_len];
		nb /= base_to_len;
		len--;
	}
	if (nbr < 0)
		result[0] = '-';
	return (result);
}


//4. Return converted string

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	base_from_len;
	int	base_to_len;
	int	nbr_basefr;
	char	*nbr_baseto;
	
	// counting base_length for base_from and base_to
	base_from_len = is_valid(base_from);
	base_to_len = is_valid(base_to);
	if (base_from_len < 2 || base_to_len < 2)
		return (0);
	
	// start converting nbr from base_from, return int
	nbr_basefr = ft_atoi_base(nbr, base_from);

	//start converting con_basefr to base_to
	nbr_baseto = ft_putnbr_base(nbr_basefr, base_to, base_to_len);

	return (nbr_baseto);
}

/* # include <stdio.h>

int main()
{
    char *result;

    // Test Case 1: Decimal to Binary
    result = ft_convert_base("42", "0123456789", "01");
    printf("Decimal 42 to Binary: %s\n", result);
    free(result);
	printf("Expected output: 101010");
	printf("\n");
	printf("\n");

    // Test Case 2: Binary to Decimal
    result = ft_convert_base("101010", "01", "0123456789");
    printf("Binary 101010 to Decimal: %s\n", result);
	printf("Expected output: 42");
    free(result);
	printf("\n");
	printf("\n");

    // Test Case 3: Decimal to Hexadecimal
    result = ft_convert_base("255", "0123456789", "0123456789ABCDEF");
    printf("Decimal 255 to Hexadecimal: %s\n", result);
	printf("Expected output: FF");
    free(result);
	printf("\n");
	printf("\n");

    // Test Case 4: Hexadecimal to Decimal
    result = ft_convert_base("FF", "0123456789ABCDEF", "0123456789");
    printf("Hexadecimal FF to Decimal: %s\n", result);
	printf("Expected output: 255");
    free(result);
	printf("\n");
	printf("\n");

    // Test Case 5: Negative Number (Decimal to Binary)
    result = ft_convert_base("-42", "0123456789", "01");
    printf("Negative Decimal -42 to Binary: %s\n", result);
	printf("Expected output: -101010");
    free(result);
	printf("\n");
	printf("\n");

    // Test Case 6: Custom Base
    result = ft_convert_base("poney", "poneyvif", "0123456789");
    printf("Custom Base 'poney' to Decimal: %s\n", result);
	printf("Expected output: 671");
    free(result);
	printf("\n");
	printf("\n");

    // Test Case 7: Invalid Input (invalid base)
    result = ft_convert_base("42", "0", "01");
    printf("Invalid Base: %s\n", result == NULL ? "NULL" : result);
	printf("Expected output: NULL");
    free(result);
	printf("\n");
	printf("\n");

    // Test Case 8: Invalid Input (empty string)
    result = ft_convert_base("", "0123456789", "01");
    printf("Empty String: %s\n", result == NULL ? "NULL" : result);
	printf("Expected output: NULL");
    free(result);
	printf("\n");
	printf("\n");

    return 0;
}
 */