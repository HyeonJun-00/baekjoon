#include <stdio.h>

void	star(int n, int m)
{
	int	i;
	int	j;

	j = 2;
	i = 0;
	while (i < m)
	{
		printf("*");
		i++;
	}
	while (j < n * 2)
	{
		printf(" ");
		j++;
	}
	while (i--)
		printf("*");
	printf("\n");
}

int	main()
{
	int	n;
	int	i;
	int	j;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		star(n - i, i + 1);
		i++;
	}
	i--;
	while (i--)
	{
		star(n - i, i + 1);
	}
}
