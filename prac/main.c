#include "component.h"
# include "../ft_printf.h"

int main()
{
	void*	ptr;
	int		i;

	i = 10;
	ptr = &i;
	printAddress(ptr);
	return (0);
}
