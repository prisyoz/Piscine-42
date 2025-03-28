#include "do_op.h"

int	main(int argc, char **argv)
{
	int	result;
	int	onenbr;
	int	twonbr;

	result = 0;
	onenbr = 0;
	twonbr = 0;
	
	// if number of argument invalid, dont display anything.
	if (argc != 4)
		return (0);

	// if invalid operator, print 0.
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	// check that there is only one operator. else invalid, print 0.
	if (argv[2][1] != '\0')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	
	//check that argv[1] annd argv[3] has interger. if got alphabet -> get rid of alphabet, atoi?
	//once hit alphabet stops and take that interger
	onenbr = ft_atoi(argv[1]);
	twonbr = ft_atoi(argv[3]);

	if (argv[2][0] == '/' && twonbr == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (argv[2][0] == '%' && twonbr == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
		
	//Take int(argv[1]) operator(argv[2] int(argv[3]))
	if (argv[2][0] == '+')
		result = add(onenbr, twonbr);
	if (argv[2][0] == '-')
		result = subtract(onenbr, twonbr);
	if (argv[2][0] == '*')
		result = multiply(onenbr, twonbr);
	if (argv[2][0] == '/')
		result = divide(onenbr, twonbr);
	if (argv[2][0] == '%')
		result = modulo(onenbr, twonbr);
	
	ft_putnbr(result);
	ft_putchar('\n');
}


// TODO: change to use an array of pointers for operation