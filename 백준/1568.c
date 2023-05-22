#include<stdio.h>

int	main()
{
	int	n;
	int	count;

	scanf("%d", &n);
	count = 0;
	for (int i = 1; n != 0; i++)
	{
		if (i > n)
			i = 1;
		n -= i;
		count++;
	}
	printf("%d\n", count);
}
