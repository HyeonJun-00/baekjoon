#include<stdio.h>

int	a(int i, int j)
{
	i -= j;
	if (i < 0)
		i *= -1;
	return i;
}

int	main()
{
	int			t;
	unsigned long long	count;
	int			n[10000];

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
		scanf(" %d", &n[i]);
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < t; j++)
			count += a(n[i], n[j]);
	}
	printf("%lld\n", count);
}
