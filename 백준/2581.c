#include<stdio.h>

int	check(int m)
{
	int	i;

	i = 2;
	if (m < 2)
		return 0;
	while (i < m)
	{

		if (m % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	main()
{
	int	m;
	int	n;
	int	first;
	int	sum;

	scanf("%d %d", &m, &n);
	first = -1;
	sum = 0;
	while (m <= n)
	{
		if (check(m))
		{
			if (sum == 0)
				first = m;
			sum += m;
		}
		m++;
	}
	if (first != -1)
	printf("%d\n", sum);
	printf("%d\n", first);
}
