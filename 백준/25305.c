#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	i;
	int	j;
	int	a;
	int	b;
	int	*c;
	int	d;

	scanf("%d %d", &b, &a);
	c = (int *)malloc(sizeof(int) * b);
	i = 0;
	while (i < b)
	{
		scanf(" %d", &c[i]);
		i++;
	}
	i = 0;
	while (i < b)
	{
		j = b;
		while (j > i)
		{
			if (c[i] < c[j])
			{
				d = c[i];
				c[i] = c[j];
				c[j] = d;
			}
			j--;
		}
		i++;
	}
		printf("%d\n", c[a - 1]);
}
