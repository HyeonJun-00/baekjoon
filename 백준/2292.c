#include<stdio.h>

int	main()
{
	long long	n;
	long long	i;
	int		j;

	scanf("%lld", &n);
	i = 2;
	j = 0;
	while (i < 10000000000)
	{
		i += j * 6;
		if (i > n)
		{
			printf("%d\n", j + 1);
			break ;
		}
		j++;
	}
}
