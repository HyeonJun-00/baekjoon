#include<stdio.h>

int	main()
{
	int	n, m;

	scanf("%d %d", &n, &m);
	char	dc[n][m + 1];

	for (int i = 0; i < n; i++)
	{
		int k = m - 1;
		scanf("%s", dc[i]);
		for(int j = 0; j < m; j++)
		{
			if (dc[i][j] == '.' && dc[i][k] != '.')
				printf("%c", dc[i][k]);
			else if (dc[i][j] != '.' && dc[i][k] == '.')
				printf("%c", dc[i][j]);
			else
				printf(".");
			k--;
		}
		printf("\n");
	}
}
