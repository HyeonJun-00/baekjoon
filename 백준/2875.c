#include<stdio.h>

int	main()
{
	int	n;
	int	m;
	int	k;
	int	i;

	scanf("%d %d %d", &n, &m, &k);
	if (n % 2 == 1)
	{
		n--;
		k--;
	}
	while (k--)
	{
		if (n < m * 2)
			m--;
		else
			n--;
	}
	i = 0;
	while (n > 1 && m > 0)
	{
		n -= 2;
		m--;
		i++;
	}
	printf("%d\n", i);
}
