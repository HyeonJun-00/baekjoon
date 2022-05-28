#include<stdio.h>

int	pt(int a)
{
	int	z;

	z = 1;
	while (a != 0)
	{
		z *= a;
		a--;
	}
	return (z);
}

int	main()
{
	int	n;
	int	k;

	scanf("%d %d", &n, &k);
	printf("%d\n", 	pt(n) / (pt(k) * pt(n - k)));
}
