#include<stdio.h>

int	main()
{
	int	n;
	int	c;
	int	count;

	scanf("%d %d", &n, &c);
	count = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j > 0; j /= 10)
		{
			if (j % 10 == c)
				count++;
		}
	}
	printf("%d \n", count);
}
