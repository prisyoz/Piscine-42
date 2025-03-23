
#include <string.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int				count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0'
		&& s1[count] == s2[count])
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

/* #include <stdio.h>

int	main(void)
{
	// Test case 1: Identical strings
	char s1[] = "pizza";
	char s2[] = "pizza";
	printf("Test 1 - Identical strings:\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("diff: %d\n\n", ft_strcmp(s1, s2));

	// Test case 2: Empty strings
	char s3[] = "";
	char s4[] = "";
	printf("Test 2 - Empty strings:\n");
	printf("s3: %s\n", s3);
	printf("s4: %s\n", s4);
	printf("diff: %d\n\n", ft_strcmp(s3, s4));

	// Test case 3: One empty string
	char s5[] = "";
	char s6[] = "nonempty";
	printf("Test 3 - One empty string:\n");
	printf("s5: %s\n", s5);
	printf("s6: %s\n", s6);
	printf("diff: %d\n\n", ft_strcmp(s5, s6));

	// Test case 4: Different length strings
	char s7[] = "pizza";
	char s8[] = "pizzaz";
	printf("Test 4 - Different length strings:\n");
	printf("s7: %s\n", s7);
	printf("s8: %s\n", s8);
	printf("diff: %d\n\n", ft_strcmp(s7, s8));

	// Test case 5: Strings with different characters
	char s9[] = "pizzA";
	char s10[] = "pizza";
	printf("Test 5 - Different characters:\n");
	printf("s9: %s\n", s9);
	printf("s10: %s\n", s10);
	printf("diff: %d\n\n", ft_strcmp(s9, s10));

	// Test case 6: Strings with special characters
	char s11[] = "p@zza";
	char s12[] = "pizza";
	printf("Test 6 - Special characters:\n");
	printf("s11: %s\n", s11);
	printf("s12: %s\n", s12);
	printf("diff: %d\n\n", ft_strcmp(s11, s12));

	return 0;
} */