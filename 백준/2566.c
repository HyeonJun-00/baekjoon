#include<stdio.h>

int	main()
{
	int	a[9][9];
	int	max[3] = {0,};

	for (int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			scanf("%d", &a[i][j]);
			if (a[i][j] >= max[0])
			{
				max[0] = a[i][j];
				max[1] = i + 1;
				max[2] = j + 1;
			}
		}
	}
	printf("%d\n%d %d\n", max[0], max[1], max[2]);
}
