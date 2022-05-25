#include <stdio.h>

int main(void)
{
	char	ox[10000][80];
	int	count[80];
	int	conum;
	int	i;
	int	j;
	int	k;

	scanf("%d", &conum);
	i = 0;
	while (i < conum)
	{
		j = 0;
		k = 1;
		scanf("%s",&*ox[i]);
		count[i] = 0;
		while (ox[i][j])
		{
			if (ox[i][j] == 'O')
			{
				count[i] += k;
				k++;
			}
			else if (ox[i][j] == 'X')
				k = 1;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < conum)
	{
		printf("%d\n", count[i]);
		i++;
	}
}
