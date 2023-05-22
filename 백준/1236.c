#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int	n;
	int	m;
	int	i;
	int	j;
	int	count[2] = {0, 0};
	char	**castle;

	scanf("%d %d", &n, &m);
	castle = (char **)malloc(sizeof(char *) * n);
	i = 0;
	while (i < n)
	{
		castle[i] = (char *)malloc(sizeof(char) * m + 1);
		scanf("%s", castle[i]);
		j = 0;
		while (j < m)
		{
			if (castle[i][j] == 'X')
			{
				count[0]++;
				break ;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < m)
	{
		j = 0;
		while (j < n)
		{
			if (castle[j][i] == 'X')
			{
				count[1]++;
				break ;
			}
			j++;
		}
		i++;
	}
	printf("%d\n",(n - count[0] >= m - count[1]) ? n - count[0] : m - count[1]);
	free(castle);
}
