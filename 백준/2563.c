#include<stdio.h>

int	main()
{
	int	a[2];
	int	b[100][100] = {0,};
	int	count;
	int	n;

	count = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &a[0], &a[1]);
		for (int i = a[0]; i < a[0] + 10; i++)
		{
			for (int j = a[1]; j < a[1] + 10; j++)
				b[i][j] = 1;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (b[i][j] == 1)
				count++;
		}
	}
		printf("%d\n", count);
}
