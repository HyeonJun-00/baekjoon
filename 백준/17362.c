#include<stdio.h>

int	main()
{
	long long	n;
	int		i;

	scanf("%lld", &n);
	i = 0;
	while (n)
	{
		for (; n > 0 && i < 5; n--)
			i++;
		for (; n > 0 && i > 1; n--)
			i--;
	}
	printf("%d\n", i);
}
