#include<stdio.h>

int	main()
{
	char	name[100][16];
	int	test;
	int	check[2];
	int	day[3][100];
	int	max[3] = {0};
	int	min[3] = {100000,100000,100000};
	int	i;
	int	j;

	scanf("%d", &test);
	i = 0;
	while (i < test)
	{
		scanf("%s %d %d %d", name[i], &day[0][i], &day[1][i], &day[2][i]);
		j = 2;
		if (min[j] > day[j][i] && j != 0)
			j = 0;
		else if (min[j] == day[j][i] )
		if (j == 0)
		{
			min[0] = day[0][i];
			min[1] = day[1][i];
			min[2] = day[2][i];
			check[0] = i;
		}
		j = 2;
		while (max[j] <= day[j][i] && j != 0)
			j--;
		if (j == 0)
		{
			max[0] = day[0][i];
			max[1] = day[1][i];
			max[2] = day[2][i];
			check[1] = i;
		}
		i++;
	}
	printf("%s\n%s\n", name[check[0]], name[check[1]]);



}
