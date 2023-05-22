#include<stdio.h>

int	factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	if (n == 0)
		return 1;
	return n;
}

int	main()
{
	int	n;

	scanf("%d", &n);
	printf("%d\n", factorial(n));
}
