
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