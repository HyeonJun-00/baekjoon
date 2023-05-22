#include<stdio.h>

int	main()
{
	int	n;
	int	scount = 0;
	int	bcount = 0;
	char	c;

	scanf("%d", &n);
	while (bcount + scount < n)
	{
		scanf("%c", &c);
		if (c == 's')
			scount++;
		if (c == 'b')
			bcount++;
	}
		if (bcount < scount)
			printf("security!\n");
		else if (bcount > scount)
			printf("bigdata?\n");
		else
			printf("bigdata? security!\n");
}
