#include<stdio.h>

int	main()
{
	int		t;
	long long 	min = 999999999;
	long long 	max = 0;

	scanf("%d", &t);
	long long	num[t];

	for (int i = 0; i < t; i++)
	{
		scanf("%lld", &num[i]);
		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
	}
	printf("%lld\n", (max - min) * 2);
}
