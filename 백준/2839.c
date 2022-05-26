#include<stdio.h>

int main()
{
	int	n;
	int	i;

	scanf("%d", &n);
	i = 0;
	while (n > 0)
	{
	if (n % 3 == 0)
	{
		i += n / 3;
		break ;
	}
	n -= 5;
	i++;
	}
	if (n < 0)
	printf("-1\n");
	else
		printf("%d\n", i);

}
