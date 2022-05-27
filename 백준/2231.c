#include<stdio.h>

int	main()
{
	int	n;
	int	i;
	int	nn;
	int	b;

	scanf("%d", &n);
	i = 0;
	while (i < 1000000)
	{
		nn = i;
		b = nn;
		while (nn != 0)
		{
			b += nn % 10;
			nn /= 10;
		}
		if (n == b)
		{
			printf("%d\n", i);
			return (0);
		}
		i++;
	}
	printf("0\n");
}
