#include<stdio.h>

int	main()
{
	int	Nnum;
	int	Mnum;
	char	N[51][51];
	int	i;
	int	k;
	int	j;
	int	max = 1;
	int	min;

	scanf("%d %d", &Nnum, &Mnum);
	min = Mnum;
	if (Nnum < Mnum)
		min = Nnum;
	i = 0;
	while (i < Nnum)
	{
		scanf("%s",N[i]);
		i++;
	}
	i = 0;
	while (i < Nnum - 1)
	{
		j = 0;
		while (j < Mnum - 1)
		{
			k = 0;
			while (k + i < Nnum && k + j < Mnum)
			{
				if (N[i][j] == N[i][j + k] && N[i][j] == N[i + k][j] && N[i][j] == N[i + k][j + k])
				{
					if (max < (k + 1) * (k + 1))
						max = (k + 1) * (k + 1);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	printf("%d\n", max);
}
