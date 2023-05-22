#include<stdio.h>
#include<stdlib.h>

int 	cmp(char *cmp1, char *cmp2)
{
	int	i;

	i = 0;
	while (cmp1[i] && cmp1[i] == cmp2[i])
		i++;
	return cmp1[i] - cmp2[i];
}

int	main()
{
	char	**id;
	char	**web;
	char	**check;
	int	N;
	int	M;
	int	i, j;

	scanf("%d %d", &N, &M);
	id = (char **)malloc(sizeof(char *) * N);
	web = (char **)malloc(sizeof(char *) * N);
	check = (char **)malloc(sizeof(char *) * M);
	i = 0;
	while (i < N)
	{
		id[i] = (char *)malloc(sizeof(char) * 21);
		web[i] = (char *)malloc(sizeof(char) * 21);
		scanf("%s %s", web[i], id[i]);
		i++;
	}
	i = 0;
	while (i < M)
	{
		check[i] = (char *)malloc(sizeof(char) * 21);
		scanf("%s", check[i]);
		j = 0;
		while (j < N)
		{	
			if (cmp(check[i], web[j]) == 0)
			{
				printf("%s\n", id[j]);
				break ;
			}
			j++;
		}
		i++;
	}
}
