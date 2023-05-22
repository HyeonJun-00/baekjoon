#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	**xy;
	int	i;
	int	j;
	int	ii;
	int	n;
	int	c;

	scanf("%d", &n);
	xy = (int **)malloc(sizeof(int *) * n);
	i = 0;
	while (i < n)
	{	
		xy[i] = (int *)malloc(sizeof(int) * 2);
		scanf("%d %d", &xy[i][0], &xy[i][1]);
		j = i - 1;
		ii = i;
		while (j != -1 && xy[j][1] >= xy[ii][1])
		{
			if (xy[j][1] == xy[ii][1] && xy[j][0] < xy[ii][0])
				break ;
			c = xy[j][1];
			xy[j][1] = xy[ii][1];
			xy[ii][1] = c;
			c = xy[j][0];
			xy[j][0] = xy[ii][0];
			xy[ii][0] = c;
			ii--;
			j--;
		}
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%d %d\n", xy[i][0], xy[i][1]);
		i++;
	}
}
