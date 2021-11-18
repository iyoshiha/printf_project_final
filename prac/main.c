#include "../component/component.h"
# include "../ft_printf.h"
# include "../tmp.h"
// ################ DEBUG
# define DEBUG

# ifdef DEBUG
# include <stdio.h>
# endif
// ################
int main()
{
	unsigned int	us;

	us = 0xabcdef01;
# if defined (DEBUG)
	printf("\n%d\n", printDecimalBase(1234, STDOUT_FILENO));
	printf("\n%d\n", printUnsignedDecimal(4294967295, STDOUT_FILENO));
# else
	printHexBase((long long unsigned int)ptr);
# endif
	return (0);
}
