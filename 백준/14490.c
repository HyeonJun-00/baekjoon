#include<stdio.h>

int	main()
{
	int	n;
	int	m;
	int	i;

	scanf("%d:%d", &n, &m);
	i = 2;
	while (i < 10000)
	{
		if (n % i == 0 && m % i == 0)
		{
			n /= i;
			m /= i;
			i = 2;
		}
		i++;
	}
	printf("%d:%d\n", n, m);
}
