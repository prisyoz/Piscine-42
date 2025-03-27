
#ifndef FT_ABS_H
# define FT_ABS_H

int	abs_value(int Value)
{
	if ((Value) < 0)
		return (-Value);
	return (Value);
}

#endif