#include<stdio.h>

int	main()
{
	int	n;
	int	m;

	scanf("%d %d", &n, &m);
	char	dol[n][m + 1];
	char	ddol[n][m * 2 + 1];
	
	for (int i = 0; i < n; i++)
		scanf("%s", dol[i]);
	for (int i = 0; i < n; i++)
		scanf("%s", ddol[i]);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (dol[i][j - 1] != ddol[i][j * 2 - 2] || dol[i][j - 1] != ddol[i][j * 2 - 1])
			{
				printf("Not Eyfa\n");
				return 0;
			}
		}
	}
				printf("Eyfa\n");
}
