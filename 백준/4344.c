#include<stdio.h>

int main()
{
	int 	c;
	int	k;
	int 	g[1001][1001];
	float	s;
	float	a[1001];

	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		scanf(" %d", g[i]);
		a[i] = 0;
		k = 0;
		for (int j = 1; g[i][0] >= j; j++)
		{
			scanf("%d", &g[i][j]);
			a[i] += g[i][j];
			k++;
		}
		a[i] /= (float)k;
	}
	for (int i = 0; i < c; i++)
	{
		s = 0;
		for (int j = 1; g[i][0] >= j; j++)
		{
			if (a[i] >= g[i][j])
				s += 0;
			else 
				s += 100;
		}
		printf("%.3f", s / g[i][0]);
		printf("%c\n",37);
	}
}
