#include "includes/ft_printf.h"
# include <stdio.h>

int main()
{
	char *s = NULL;
	void *p = NULL;
	int ret;

	puts("####str####");
	ret = ft_printf("%s", s);
	ft_printf("\n");
	ft_printf("%d", ret);
	ft_printf("\n");
	/*
	puts("#### *p####");
	ret = ft_printf("%p", p);
	ft_printf("\n");
	ft_printf("%d", ret);
	ft_printf("\n");
	*/
	return 0;
}
