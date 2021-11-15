
#include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "../header/libft.h"

int f(long long int l)
{
	puts("SUCCESS: cast to long long int as arg from void *");
	return (l);
}
void h(void* ptr)
{
	printf("in h func : %p\n", ptr);
	return ;
}

int	main(void)
{
	void* num;
	long	l;
	void* ptr;

	num = &num;
	ptr = &l;
	printf("%xl\n", f((long long int)ptr));
	// l = (long)num;  // SUCCESS: cast to long int from point type
	// printf("%lx\n", l);
	h((num));
	// printf("hello %p\n", num);
	return(0);
}
