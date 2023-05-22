#include<stdio.h>

int	main()
{
	int	i;
	int	a[50];
	int	d;
	int	n;

	scanf("%d", &n);
	if (n == 1)
		return 0;
	i = 2;
	d = 0;
	while (i <= n)
	{
		if (n % i == 0)
		{
			a[d] = i;
			n /= i;
			d++;
			i = 1;
		}
		i++;
	}
	i = 0;
	while (i < d)
	{
		printf("%d\n", a[i]);
		i++;
	}


}
