#include<stdio.h>

void	ap(const char* a, const char* b, int n, int m)
{
	int	i;
	int	j;

	j = 0;
	while (m > j)
	{
		i = 0;
		while (i < n)
		{
			if (i == 0)
				printf("%s", a);
			else if (i == n - 1)
				printf("%s", a);
			else
				printf("%s", b);
			i++;
		}
		printf("\n");
		j++;
	}
}
int	main()
{
	int	n;

	scanf("%d", &n);
	n += 2;
	ap("@", "@", n, 1);
	ap("@", " ", n, n - 2);
	ap("@", "@", n, 1);
}
