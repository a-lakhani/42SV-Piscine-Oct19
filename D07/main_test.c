#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *a = "hello", *b;
	b = ft_strdup(a);
	printf("%s\n",b);

	int n[7] = * ft_range(8, 15);
	int i=0;
	while (i < 7)
	{
		printf("%d\t", *(n + i));
	}
	return (0);
}
