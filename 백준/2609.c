#include<stdio.h>

int	main()
{
	int	a;
	int	b;
	int	i;
	int	com;

	scanf("%d %d", &a, &b);
	com = 1;
	i = 2;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
		{
			com *= i;
			a /= i;
			b /= i;
			i = 1;
		}
		i++;
	}
	if (a == 0 || b == 0)
		com = 0;
	printf("%d\n%d\n", com, a * b / com);
}
