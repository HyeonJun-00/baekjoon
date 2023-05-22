#include<stdio.h>

int	main()
{
	int	a[2];
	int	b[2];

	scanf("%d %d %d %d", &a[0], &a[1], &b[0], &b[1]);
	while (1)
	{
		if (b[0] == b[1])
			break ;
		else if (b[0] < b[1])
			b[0] += a[0];
		else
			b[1] += a[1];
		if (b[0] > 100000)
		{
			printf("-1\n");
			return 0;
		}
	}
		printf("%d\n", b[0]);
}
