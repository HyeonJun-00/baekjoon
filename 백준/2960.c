#include<stdio.h>

void	save(int *era, int N)
{
	int	i;

	i = 2;
	while (i <= N)
	{
		era[i] = i;
		i++;
	}
}

int	main()
{
	int	era[1000];
	int	count;
	int	N;
	int	K;
	int	i;
	int	j;

	scanf("%d %d", &N, &K);
	save(era, N);
	count = 0;
	i = 1;
	while (i <= N)
	{
		i++;
		if (era[i] == 0)
			continue ;
		else
		{
			j = i;
			while (j <= N)
			{
				if (era[j] != 0)
				{
					era[j] = 0;
					count++;
				}
				if (K == count)
				{
					printf("%d\n", j);
					break ;
				}
				j += i;
			}
		}
	}
	return 0;
}
