#include<stdio.h>

long long	fibonacci[120] = {1, 1, 1, 0,};

long long	fi(int n)
{
	if (fibonacci[n] != 0)	return fibonacci[n];
	return fibonacci[n] = fi(n - 1) + fi(n - 3);
}

int	main()
{
	int	n;

	scanf("%d", &n);
	printf("%lld\n", fi(n - 1));
}
