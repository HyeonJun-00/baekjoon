#include<stdio.h>

int	main()
{
	int	m;
	int	n;
	int	s[1000000];
	int	i;
	int	j;

	scanf("%d %d", &m, &n);
	i = 2;
	while (i <= n)
	{
		j = 2;
		while (i * j <= n)
		{
			s[i * j] = 1;
			j++;
		}
		i++;
	}
	while (m <= n)
	{
		if (s[m] == 0)
		printf("%d\n", m);
		m++;
	}
}
