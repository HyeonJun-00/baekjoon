#include<stdio.h>

int	main()
{
	int	n;
	int	i;
	int	check;
	char	sdd[101];

	scanf("%d %s", &n, sdd);
	i = 0;
	check = 0;
	while (i < n / 2)
	{
		if (sdd[i] != sdd[n - i - 1])
			check++;
		i++;
	}
	printf("%d\n", check);
}
