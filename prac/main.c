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
	printf("%d\n", ft_putnbr_fd_i(321, STDOUT_FILENO));
# else
	printHexBase((long long unsigned int)ptr);
# endif
	return (0);
}
