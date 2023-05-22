#include<stdio.h>

int	main()
{
	double	n;
	int	t;

	scanf("%d", &t);
	while (t--)
	{
		scanf("%lf", &n);
		printf("$%.2lf\n", n * 0.8);
	}
}
