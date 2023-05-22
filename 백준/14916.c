#include<stdio.h>

int	main()
{
	int	n;
	int	s;
	int	count;

	scanf("%d", &n);
	s = n;
	count = 0;
	for (;n - 5 >= 0; count++)
		n -= 5;
	while (n != 0)
	{
		if (s < count * 2)
		{
			count = -1;
			break ;
		}
		if (n - 2 < 0)
		{
			n += 5;
			count--;
		}
		n -= 2;
		count++;
	}
	printf("%d\n", count);
}
