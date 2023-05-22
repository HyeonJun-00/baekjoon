#include<stdio.h>

int	fi[10000];

int	fibonacci(int n)
{

	if (n <= 1)
		return n;
	if (fi[n] > 0)
		return fi[n];
	fi[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return fi[n];
}

int     main()
{
	int     n;
	int	t;

	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		if (n == 0)
			printf("1 0\n");
		else
			printf("%d %d\n", fibonacci(n - 1) , fibonacci(n));
	}
}
