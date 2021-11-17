#include "component.h"
# include "../ft_printf.h"

int main()
{
	void*	ptr;
	int		i;

	i = 10;
	ptr = &i;
	printHexBase((long long unsigned int)ptr);
	return (0);
}
