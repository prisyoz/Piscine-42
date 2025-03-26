//valid arguments. return base_length
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
int	sp_polar(char *str, int *index)
{
	int	sign;

	sign = 1;
	while (str[*index] == ' ' || (str[*index] >= 9 && str[*index] <= 13))
		(*index)++;
	while (str[*index] == '+' || str[*index] == '-')
	{
		if (str[*index] == '-')
			sign *= -1;
		(*index)++;
	}
	return (sign);
}

//check if the character is inside the base.
int	get_base(char c, char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		if(c == base[count])
			return (count);
		count++; 
	}
	return (-1);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	index;
	int	base_length;
	int	sign;
	int	result;
	int	base_value;

	index = 0;
	base_length = is_valid(base);
	result = 0;
	if (base_length < 2)
		return (0);
	sign = sp_polar(str, &index);
	while (str[index] != '\0')
	{
		base_value = get_base(str[index], base);
		// Stop conversion on invalid character
		if (base_value == -1) 
			break;
		result = (result * base_length) + base_value;
		index++;
	}
	return (result * sign);
}


/* #include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("  -2F", "0123456789ABCDEF"));  // Expected: -47
	printf("%d\n", ft_atoi_base("  101", "01"));  // Expected: 5
	printf("%d\n", ft_atoi_base("ZZ", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ")); // Expected: 1295
	printf("%d\n", ft_atoi_base("  +++--23", "0123456789")); // Expected: -23
	return 0;
}


int		main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--10", "0123456789"));
	printf("%d\n", ft_atoi_base(" --101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539e", "0123456789abcdef"));
} */