#include<stdio.h>

int	check(int *test)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	i = 0;
	while (i < 3)
	{
		j =  i + 1;
		while (j < 3)
		{
			if (test[i] > test[j])
			{
				c = test[i];
				test[i] = test[j];
				test[j] = c;
			}
			j++;
		}
		i++;
	}
	if (test[2] == test[0] + test[1])
		return (1);
	return (0);
}

int	main()
{
	int	test[3];
	int	j;

	while (1)
	{
		j = 0;
		while (j < 3)
		{
			scanf("%d", &test[j]);
			test[j] *= test[j];
			j++;
		}
		if (test[0] == 0 && test[1] == 0 && test[2] == 0)
		return (0);
		if (check(test))
			printf("right\n");
		else
			printf("wrong\n");
	}
}
