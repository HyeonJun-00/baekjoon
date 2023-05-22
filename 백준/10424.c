#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	n;
	int	*A;
	int	*save;
	int	i;

	scanf("%d", &n);
	A = (int *)malloc(sizeof(int) * n);
	save = (int *)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &A[i]);
		save[A[i] - 1] = A[i] - i - 1;
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%d\n", save[i]);
		i++;
	}
}
