#include<stdio.h>

int	check(int n, int n2)
{
	int	i;
	int	sum;

	sum = 0;
	while (n <= n2)
	{
		i = 2;
		while (n >= i)
		{
			if (i > 500 || i == n)
			{
				sum++;
				break ;
			}
			if (n % i == 0)
				break ;
			i++;
		}
		n++;
	}
	return sum;

}

int	main()
{
	int	n;

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break ;
		printf("%d\n", check(n + 1, n * 2));
	}
}
