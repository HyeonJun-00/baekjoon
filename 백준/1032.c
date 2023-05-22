#include<stdio.h>

int	main()
{
	int	n;
	int	i;
	int	j;
	char	filename[50][51];
	char	end[51];

	scanf("%d", &n);
	i = 0;
	j = 0;
	while (i < n)
	{
		scanf("%s", filename[i]);
		i++;
	}
	i = 0;
	while (filename[0][i])
	{
		j = 0;
		end[i] = filename[0][i];
		while (j < n)
		{
			if (end[i] != filename[j][i])
			{
				end[i] = '?';
				break ;
			}
			j++;
		}
		i++;
	}
	end[i] = 0;
	printf("%s\n", end);
}
