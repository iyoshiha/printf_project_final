#include "component.h"
# include "../ft_printf.h"
################ DEBUG
# define DEBUG

# ifdef DEBUG
# include <stdio.h>
# endif
################
int main()
{
	void*	ptr;
	int		i;

	i = 10;
	ptr = &i;
# if defined (DEBUG)
	printf("%d\n",printHexBase((long long unsigned int)ptr));
# else
	printHexBase((long long unsigned int)ptr);
# endif
	return (0);
}
