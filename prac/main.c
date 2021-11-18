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
	printf("\n%d\n",print_unsigned_int_hex(0));
	printf("\n%d\n",printf("%x",0));
# else
	printHexBase((long long unsigned int)ptr);
# endif
	return (0);
}
