
#include <string.h>

char	*ft_strcapitalize(char	*str)
{
	unsigned int	i;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')) && (str[i -1] < '0'
				|| (str[i -1] > '9' && str[i -1] < 'A')
				|| (str[i -1] > 'Z' && str[i -1] < 'a')
				|| str[i -1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/* #include <stdio.h> 

int main(void)
{
    char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et++un d0Es th1s w0Rk? i hOpe +it 3DOES!";
    ft_strcapitalize(s);
    printf("%s", s);
} */