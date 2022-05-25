#include<stdio.h>

int main()
{
	int 	c;
	int 	i;
	int	j;
	int 	g[1001][1001];
	int	k;
	float	s;
	float	a[1001];

	scanf("%d", &c);
	i = 0;
	while (c > i)
	{
		scanf(" %d", &*g[i]);
		j = 1;
		a[i] = 0;
		k = 0;
		while (g[i][0] >= j)
		{
			scanf("%d", &g[i][j]);
			a[i] += g[i][j];
			k++;
			j++;
		}
		a[i] /= (float)k;
		i++;
	}
	i = 0;
	while (c > i)
	{
		j = 1;
		s = 0;
		while (g[i][0] >= j)
		{
			if (a[i] >= g[i][j])
				s += 0;
			else 
				s += 100;
			j++;
		}
		printf("%.3f", s / g[i][0]);
		printf("%c\n",37);
		i++;
	}
}
