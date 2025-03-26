
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*total_len(int size, char **strs, char *sep)
{
	int		count;
	int		total_len;
	char	*tab;

	count = 0;
	total_len = 0;
	if (size == 0)
	{
		tab = malloc(1);
		if (tab == NULL)
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	while (count < size)
	{
		total_len += ft_strlen(strs[count]);
		count++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	return (malloc(sizeof(char) * (total_len + 1)));
}

void	ft_cpy(char *tab, int size, char **strs, char *sep)
{
	int	count;
	int	acount;
	int	tabpos;

	count = 0;
	tabpos = 0;
	while (count < size)
	{
		acount = 0;
		while (strs[count][acount] != '\0')
			tab[tabpos++] = strs[count][acount++];
		if (count < size - 1)
		{
			acount = 0;
			while (sep[acount] != '\0')
				tab[tabpos++] = sep[acount++];
		}
		count++;
	}
	tab[tabpos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;

	tab = total_len(size, strs, sep);
	if (tab == NULL)
		return (NULL);
	ft_cpy(tab, size, strs, sep);
	return (tab);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	char *sep = " / ";
// 	int size = 4;
// 	char *strs[] = {"test", "test1", "test2", "test3"};

// 	char *result = ft_strjoin(size, strs, sep);
// 	printf("%s\n", result);
// 	free(result);

// 	return (0);
// }
