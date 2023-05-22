#include<stdio.h>

long long	fi[100];

long long	fibonacci(int n)
{
	if (n <= 1)
		return n;
	if (fi[n] > 0)
		return fi[n];
	fi[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return fi[n];
}

int	main()
{
	int	n;

	scanf("%d", &n);
	printf("%lld\n", fibonacci(n));
}
