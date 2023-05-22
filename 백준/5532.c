#include<stdio.h>

int	main()
{
	int	l;
	int	a, i = 0;
	int	b, j = 0;
	int	c;
	int	d;
	
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
	if (a % c != 0)
		i++;
	if (b % d != 0)
		j++;
	a /= c;
	b /= d;
	printf("%d\n",l - (a + i) < l - (b + j) ? l - (a + i) : l - (b + j));
}
