#include<stdio.h>

int	main()
{
	int	n;
	int	min[3] = {0, 1, 2};
	char	ch[50][36];
	int	check;
	int	i;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < 35; j++)
			scanf(" %c", &ch[i][j]);
	}
	for (i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			check = 0;
			for (int k = 0; k < 35; k++)
			{
				if (ch[i][k] == ch[j][k])
					check++;
			}
			if (check > min[0])
			{
				min[0] = check;
				min[1] = i + 1;
				min[2] = j + 1;
			}
		}
	}
	printf("%d %d\n", min[1], min[2]);
}
