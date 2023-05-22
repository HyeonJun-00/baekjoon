#include<stdio.h>

int	main()
{
	int	T;
	int	N;
	int	M;
	int	count;
	int	save;

	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d", &N, &M);
		count = 0;
		while (N <= M)
		{
			if (N == 0)
				count++;
			save = N;
			while (save)
			{
				if (save % 10 == 0)
					count++;
				save /= 10;
			}
			N++;
		}
		printf("%d\n", count);
	}
}
