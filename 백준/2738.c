#include<stdio.h>

int	main()
{
	int	a[2][100001];
	int	n, m;
	int	check;

	scanf("%d %d", &n, &m);
	n *= m;
	check = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
			if (i == 1)
			{
				printf("%d ", a[0][j] + a[1][j]);
				check++;
				if (check == m)
				{
					printf("\n");
					check = 0;
				}
			}
		}
	}
}
