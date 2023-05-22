#include<stdio.h>
#include <stdlib.h>

int	main()
{
	int	n;
	int	*num;
	int	all;
	int	i;
	int	c;

	scanf("%d", &n);
	num = (int *)malloc(sizeof(int) * n);
	i = 0;
	all = 0;
	c = 0;
	while (i < n)
	{
		scanf("%d", &all);
		if (all == 0)
		{
			c--;
			num[c] = 0;
		}
		else if (all != 0)
		{
			num[c] = all;
			c++;
		}
		i++;
	}
	i = 0;
	all = 0;
	while (i < n)
	{
		all += num[i];
		i++;
	}
	printf("%d\n", all);
}
