#include<stdio.h>

int	main()
{
	int	num;
	int	n;
	int	i;
	int	min;
	int	max;

	scanf("%d", &n);
	max = 0;
	min = 20000000;
	i = 0;
	while (i < n)
	{
		scanf("%d", &num);
		if (num > max)
			max = num;
		if (num < min)
			min = num;
		i++;
	}
	printf("%d\n", min * max);
}
