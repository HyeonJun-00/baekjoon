#include<stdio.h>

int	check(int bingo[5][5])
{
	int	count = 0;
	int	sum   = 0;
	int	i     = 0;
	int	j     = 0;

	while (i < 5)
	{
		if (bingo[i][j] == 0)
			count++;
		i++;
		j++;
	}
	if (count == 5)
		sum++;
	i = 0;
	j = 4;
	count = 0;
	while (i < 5)
	{
		if (bingo[i][j] == 0)
			count++;
		i++;
		j--;
	}
	if (count == 5)
		sum++;
	for (i = 0; i < 5; i++)
	{
		count = 0;
		for (j = 0; j < 5; j++)
		{
			if (bingo[i][j] == 0)
				count++;
		}
		if (count == 5)
			sum++;
	}
	for (i = 0; i < 5; i++)
	{
		count = 0;
		for (j = 0; j < 5; j++)
		{
			if (bingo[j][i] == 0)
				count++;
		}
		if (count == 5)
			sum++;
	}
	if (sum > 2)
		return 1;
	return 0;
}

int	main()
{
	int	bingo[5][5];
	int	X;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			scanf("%d", &bingo[i][j]);

	}
	for (int i = 0; i < 25; i++)
	{
		scanf("%d", &X);
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (X == bingo[i][j])
					bingo[i][j] = 0;
			}
		}
		if (i > 8)
		{
			if (check(bingo)
				printf("%d\n", i + 1);
		}
	}
}
