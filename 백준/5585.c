#include<stdio.h>

int	main()
{
	int	n;
	int	i;
	int	money;
	int	check;
	int	coin[6] = {500, 100, 50, 10, 5, 1};

	scanf("%d", &n);
	money = 1000 - n;
	check = 0;
	i = 0;
	while (money)
	{
		if (money - coin[i] < 0)
			i++;
		else
		{
			money -= coin[i];
			check++;
		}
	}
	printf("%d\n", check);
}
