#include<stdio.h>
#include<stdlib.h>

int	pr(int *b, int j)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (i <= j)
	{
		a += b[i];
		i++;
	}
	return (a);
}

void	ban(int k, int n, int i)
{
	int	b[14][14];
	int	j;

	scanf("%d %d", &k, &n);
	k++;
	i = 0;
	while (i < k)
	{
		j = 0;
		while (j < n)
		{
			if (i == 0)
				b[i][j] = j + 1;
			else
				b[i][j] = pr(b[i - 1], j);
			j++;
		}
		i++;
	}
	printf("%d\n", b[k - 1][n - 1]);
}


int	main()
{
	int	i;
	int	t;

	scanf("%d", &t);
	i = 0;
	while (i < t)
	{
		ban(0, 0, 0);
		i++;
	}
}
