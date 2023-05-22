#include<stdio.h>

int	main()
{
	int	n;
	int	i;
	int	m;
	int	check;
	int	j;

	scanf("%d", &n);
	i = 0;
	check = n;
	while (i < n)
	{
		scanf("%d", &m);
		if (m == 1)
			check --;
		j = 2;
		while (j < m)
		{
			if (m % j == 0)
			{
			check --;
			break;
			}
			j++;
		}
		i++;
	}
	printf("%d\n", check);
}
