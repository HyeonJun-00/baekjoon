#include<stdio.h>

int	main()
{
	float	k;
	float	n[50];
	int	i;
	int	t;
	char	name[51][11];

	while (1)
	{
		i = 0;
		k = 0;
		scanf("%d", &t);
		if (!t)
			return 0;
		while (i < t)
		{
			scanf("%s%f", name[i], &n[i]);
			if (k < n[i])
				k = n[i];
			i++;
		}
		i = 0;
		while (i < t)
		{
			if (n[i] == k)
				printf("%s ", name[i]);
			i++;
		}
		printf("\n");
	}
}
