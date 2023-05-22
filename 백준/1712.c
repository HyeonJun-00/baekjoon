#include<stdio.h>

int	main()
{
int	a;
int	b;
int	c;

scanf("%d %d %d", &a, &b, &c);
if (b >= c)
	printf("-1\n");
else
	printf("%d\n", a / (c - b) + 1);
}
