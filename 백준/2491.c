#include<stdio.h>

int	main()
{
	int	n;
	int	i;
	int	su[100000];
	int	count[3] = {1, 0, 0};

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%1d", &su[i]);
	for (i = 0; i < n; i++)
	{
		if (su[i] == su[i - 1])
		{
			count[1]++;
			count[2]++;
		}
		if (su[i] > su[i - 1])
		{
			count[1]++;
			count[2] = 1;
		}
		if (su[i] < su[i - 1])
		{
			count[2]++;
			count[1] = 1;
		}
		if (count[1] >= count[0] || count[2] >= count[0])
			count[0] = ((count[1] > count[2]) ? count[1]:count[2]);
	}
	printf("%d\n", count[0]);
}
