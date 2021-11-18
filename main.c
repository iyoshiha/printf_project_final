#include "cmp_h"
# include <stdio.h>
# include "ft_printf.h"
# include "tmp.h"

int main()
{
printf("printed num : %d  :output:", 	printf("%d\n", 12938));
printf("printed num : %d  :output:", 	ft_printf("%d\n", 12938));
printf("printed num : %d  :output:", 	printf("%s\n", "hell no"));
printf("printed num : %d  :output:", 	ft_printf("%s\n", "hell no"));
printf("printed num : %d  :output:", 	printf("%c\n", 'A'));
printf("printed num : %d  :output:", 	ft_printf("%c\n", 'A'));
printf("printed num : %d  :output:", 	printf("%x\n", 22222));
printf("printed num : %d  :output:", 	ft_printf("%x\n", 22222));
printf("printed num : %d  :output:", 	printf("%X\n", 11111));
printf("printed num : %d  :output:", 	ft_printf("%X\n", 11111));
	return 0;
}
