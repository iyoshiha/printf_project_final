#include "cmp_h"
#include <stdio.h>
#include "ft_printf.h"
#include "tmp.h"

int main()
{
	int p;
	p = 10;
	int count[100];
	int	i = 0;
	//
	count[i++] = ft_printf("%p", &i);
	count[i++] = ft_printf("%x\n", 0xabc);
	count[i++] = ft_printf("\n%s\n", "abc");
	count[i++] = ft_printf("%d\n", 12345);

	count[i++] = ft_printf("%%");
	count[i++] = ft_printf("%i\n", 1234);
	count[i++] = ft_printf("%u\n", 0xFFFFFFFF);
	count[i++] = ft_printf("%X\n", 0xFBA); // bug returns 11 but should be 8
	//
	// count[i++] = ft_printf("%X\n%X\n", 0xFBA,0xFBA); // bug returns 11 but should be 8
/*
	count[i++] = ft_printf("%X", 0xFBA,0xFBA);
	puts("\n");
	count[i++] = ft_printf("%X", 0xFBA,0xFBA);
	puts("\n");
	end = i;
	*/
	printf("x:%d p: %d p:%d X:%d ", count[0], count[1], count[2], count[3]);
	printf("x:%d p: %d p:%d X:%d ", count[4], count[5], count[6], count[7]);
	// printf("X:%d ||  X:%d", count[0], count[1]);
	/*
	printf("printed num : %d  :output:\n", printf("%d\n", 12938));
	printf("printed num : %d  :output:\n", ft_printf("%d\n", 12938));
	printf("printed num : %d  :output:\n", printf("%s\n", "hell no"));
	printf("printed num : %d  :output:\n", ft_printf("%s\n", "hell no"));
	printf("printed num : %d  :output:\n", printf("%c\n", 'A'));
	printf("printed num : %d  :output:\n", ft_printf("%c\n", 'A'));
	printf("printed num : %d  :output:\n", printf("%x\n", 22222));
	printf("printed num : %d  :output:\n", ft_printf("%x\n", 22222));
	printf("printed num : %d  :output:\n", printf("%X\n", 11111));
	printf("printed num : %d  :output:\n", ft_printf("%X\n", 11111));
	printf("printed num : %d  :output:\n", printf("%p\n", &p));
	printf("printed num : %d  :output:\n", ft_printf("%p\n", &p));
	*/
	return 0;
}
