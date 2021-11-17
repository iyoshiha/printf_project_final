#include "component.h"
# include "../ft_printf.h"
// ################ DEBUG
# define DEBUG

# ifdef DEBUG
# include <stdio.h>
# endif
// ################
int main()
{
	void*	ptr;
	int		i;

	i = 10;
	ptr = &i;
# if defined (DEBUG)
	printf("\n%d\n",printAddress(ptr));
	printf("\n%d\n",printf("%p",(ptr)));
# else
	printHexBase((long long unsigned int)ptr);
# endif
	return (0);
}
