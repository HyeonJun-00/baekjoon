#include<stdio.h>

int    main()
{
	int     n;
	int     i;
	int	j;
	int     a;

	j = 0;
	while (j < 3)
	{
		a = 0;
		i = 0;
		while (i < 4)
		{
			scanf("%d", &n);
			a += n;
			i++;
		}
		if (a == 4)
			printf("E\n");
		else if (a == 0)
			printf("D\n");
		else
			printf("%c\n", 'D' - a);
		j++;
	}
}
