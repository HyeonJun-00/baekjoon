#include<stdio.h>

int	main()
{
	int	n;
	int	a;

	scanf("%d", &n);
	if (n > 228)
		a = 4;
	else if (n > 217)
		a = 3;
	else if (n > 205)
		a = 2;
	else
		a = 1;
	printf("%d\n", a);
}
