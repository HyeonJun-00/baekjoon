#include<stdio.h>

int	main()
{
	int	c[8];
	int	i;

	i = 0;
	while (i < 8)
	{
		scanf("%d", &c[i]);
		i++;
	}
	if (c[0] == 1)
	{
		i = 0;
		while (i < 8)
		{
			if (1 + i != c[i])
			{
				printf("mixed");
				return (0);
			}
			i++;
		}
		printf("ascending");
		return (0);
	}
	else if (c[0] == 8)
	{
		i = 0;
		while (i < 8)
		{
			if (8 - i != c[i])
			{
				printf("mixed");
				return (0);
			}
			i++;
		}
		printf("descending");
		return (0);
	}
	printf("mixed");
}
