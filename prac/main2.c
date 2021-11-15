
#include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "../header/libft.h"

void h(void* ptr)
{
	printf("%p\n", ptr);
	return ;
}

int	main(void)
{
	void* num;
	long	l;

	num = &num;
	l = (long)num;  // SUCCESS: cast to long int from point type
	printf("%lx\n", l);
	h((num));
	printf("hello %p\n", num);
	return(0);
}
