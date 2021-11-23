#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i;
	int * p;
	unsigned int li;
	int			mi_i;

	puts("========= c =========");
	char c = 'Z';
	i = printf("%c\n", c);
	printf("%d\n", i);
	i = ft_printf("%c\n", c);
	printf("%d\n", i);
	i = printf("%c\n", ' ');
	printf("%d\n", i);
	i = printf("%c\n", ' ');
	printf("%d\n", i);
	i = printf("%c\n", 'Y');
	printf("%d\n", i);
	i = printf("%c\n", 'Y');
	printf("%d\n", i);
	puts("========= s =========");
	char str[] = "GREAT";
	i = printf("%s\n", str);
	printf("%d\n", i);
	i = ft_printf("%s\n", str);
	printf("%d\n", i);
	i = printf("%s\n", "  ");
	printf("%d\n", i);
	i = ft_printf("%s\n", "  ");
	printf("%d\n", i);
	i = printf("%s", "");
	printf("%d\n", i);
	i = ft_printf("%s", "");
	printf("%d\n", i);
	puts("========= p =========");
	p = &i;
	i = printf("%p\n", p);
	printf("%d\n", i);
	i = ft_printf("%p\n", p);
	printf("%d\n", i);
	puts("========= d =========");
	mi_i = -2147483648;
	i = printf("%d\n", 0);
	printf("%d\n", i);
	i = ft_printf("%d\n", 0);
	printf("%d\n", i);
	i = printf("%d\n", 2147483647); // maximum val signed int
	printf("%d\n", i);
	i = ft_printf("%d\n", 2147483647);
	printf("%d\n", i);
	i = printf("%d\n", mi_i);
	printf("%d\n", i);
	i = ft_printf("%d\n", mi_i);
	printf("%d\n", i);
	/*
	i = printf("%d\n", );
	i = printf("%d\n", );
	i = printf("%d\n", );
	i = printf("%d\n", "");
	i = printf("%d\n", "");
	i = printf("%d\n", "");
	i = printf("%d\n", "");
	*/
	puts("========= i =========");
	i = printf("%d\n", 0);
	printf("%d\n", i);
	i = ft_printf("%d\n", 0);
	printf("%d\n", i);
	i = printf("%d\n", 2147483647); // maximum val signed int
	printf("%d\n", i);
	i = ft_printf("%d\n", 2147483647);
	printf("%d\n", i);
	i = printf("%d\n", -2147483647);
	printf("%d\n", i);
	i = ft_printf("%d\n", -2147483647);
	printf("%d\n", i);
	puts("========= u =========");
	li = 4294967295;
	i = printf("%u\n", 0);
	printf("%u\n", i);
	i = ft_printf("%u\n", 0);
	printf("%u\n", i);
	i = printf("%u\n", li);
	printf("%u\n", i);
	i = ft_printf("%u\n", li);
	printf("%u\n", i);

	puts("========= x =========");
	i = printf("%x\n", li);
	printf("%u\n", i);
	i = ft_printf("%x\n", li);
	printf("%u\n", i);
	i = printf("%x\n", 0xffffffff);
	printf("%u\n", i);
	i = ft_printf("%x\n", 0xffffffff);
	printf("%u\n", i);
	i = printf("%x\n", 0);
	printf("%u\n", i);
	i = ft_printf("%x\n", 0);
	printf("%u\n", i);
	puts("========= X =========");
	i = printf("%X\n", li);
	printf("%u\n", i);
	i = ft_printf("%X\n", li);
	printf("%u\n", i);
	i = printf("%X\n", 0xffffffff);
	printf("%u\n", i);
	i = ft_printf("%X\n", 0xffffffff);
	printf("%u\n", i);
	i = printf("%X\n", 0);
	printf("%u\n", i);
	i = ft_printf("%X\n", 0);
	printf("%u\n", i);
	printf("======== %% =========\n");
	i = printf("%%\n");
	printf("%u\n", i);
	i = ft_printf("%%\n");
	printf("%u\n",i);
	i = printf("", i);
	puts("====================");
	printf("%u\n",i);
	return 0;
}
