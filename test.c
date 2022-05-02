#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	//long int li = -ULONG_MAX;
	int t1 = ft_printf("This %p is even stranger\n", (void *)ULONG_MAX);

	int t2 = printf("This %p is even stranger\n", (void *)ULONG_MAX);

	//printf("%ld\n", LONG_MIN);

	return (0);
}
