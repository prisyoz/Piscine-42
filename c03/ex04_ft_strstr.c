
#include <string.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int		str_count;
	int		find_count;

	if (to_find[0] == '\0')
		return (str);
	str_count = 0;
	while (str[str_count] != '\0')
	{
		find_count = 0;
		while (to_find[find_count] != '\0')
		{
			if (str[str_count + find_count] == to_find[find_count])
				find_count++;
			else
				break ;
		}
		if (to_find[find_count] == '\0')
			return (str + str_count);
		str_count++;
	}
	return (0);
}


/* #include <stdio.h>

int	main()
{
	char	str[100] = "Its almost halfway through the piscine!!";
	char	find[20] = "rou";
	char	str2[100] = "I think its time to sleep";
	char	find2[20] = "lol";
	char	str3[100] = "This is a trick.";
	char	find3[20] = "trc";

	printf("str: %s\n", str);
	printf("to find: %s\n", find);
	printf("substring: %s", ft_strstr(str, find));
    printf("\n");
    printf("\n");
	
	printf("str: %s\n", str2);
	printf("to find: %s\n", find2);
	printf("substring: %s", ft_strstr(str2, find2));
	printf("\n");
    printf("\n");
    
    printf("str: %s\n", str3);
	printf("to find: %s\n", find3);
	printf("substring: %s", ft_strstr(str3, find3));
	return (0);
} */