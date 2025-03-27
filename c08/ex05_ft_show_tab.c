/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pang <pang@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:04:13 by pang              #+#    #+#             */
/*   Updated: 2025/03/06 20:36:59 by pang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// int	main(int argc, char **argv)
// {
// 	t_stock_str	*tab;

// 	tab = ft_strs_to_tab(argc, argv);
// 	ft_show_tab(tab);
// 	return (0);
// }
