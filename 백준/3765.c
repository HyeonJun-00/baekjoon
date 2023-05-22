#include<stdio.h>

int	main()
{
	char	a;

	while ((a = getchar()) != EOF)
		printf("%c", a);
}
