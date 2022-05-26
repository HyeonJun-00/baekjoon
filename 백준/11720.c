#include<stdio.h>

int main()
{
	int	c;
	int	i;
	int	cc;
	char	b[1000];

	scanf("%d",&c);
	cc = 0;
	i = 0;
	while (i < c)
	{
		scanf(" %c", &b[i]);
		cc += b[i] - 48;
		i++;
	}
	printf("%d\n", cc);
}
