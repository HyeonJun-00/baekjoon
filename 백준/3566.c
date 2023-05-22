#include<stdio.h>

int	r1, r2;
int	s1, s2;

int	dd(int	a, int b, int c, int d, int e)
{
	int	i = 0;
	int	j = 0;

	while (a * i < r1 || c * i < s1)
		i++;
	while (b * j < r2 || d * j < s2)
		j++;
	return i * j * e;
}

int	main()
{

	int	min = 100000000;
	int	p;
	int	a, b, c, d, e;
	int	m, n, s;

	scanf("%d %d %d %d %d", &r1, &r2, &s1, &s2, &p);
	while (p--)
	{
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		m = dd(a, b, c, d, e);
		n = dd(b, a, d, c, e);
		s = m < n ? m : n;
		if (min > s)
			min = s;
	}
	printf("%d\n", min);
}
