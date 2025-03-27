/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pang <pang@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 00:42:37 by pang              #+#    #+#             */
/*   Updated: 2025/03/03 00:52:37 by pang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) 

int	abs_value(int Value)
{
	int	i;

	i = -1;
	if ((Value) < 0)
	{
		(Value) *= -1;
	}
	return (Value);
}

#endif