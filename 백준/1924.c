#include<stdio.h>

int	main()
{
	int	x[13];
	int	y[32];
	int	j;
	int	num[2];
	int	a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int	k = 0;
	char	day[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

	scanf("%d %d", &num[0], &num[1]);
	for (int i = 1; i <= 12; i++)
	{
		for (j = 1; j <= a[i - 1]; j++)
		{
			if (num[0] == i && num[1] == j)
				break ;
			if (k == 7)
				k = 0;
			k++;
		}
		if (k == 7)
			k = 0;
		if (num[0] == i && num[1] == j)
			break ;
	}
	printf("%s\n", day[k]);
}
