#include<stdio.h>

int	S[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

int	len(int i, int j, char *a, char *b)
{
	while (a[i])
		i++;
	while (b[j])
		j++;
	return i + j;
}

int	main()
{
	char	a[2][2001];
	int	line[4000];
	int	alen;
	int	j;
	int	i;

	scanf("%s %s", a[0], a[1]);
	alen = len(0, 0, a[0], a[1]);
	j = 0;
	for (i = 0; j < alen; i++)
	{
		line[j] = S[a[j % 2][i] - 'A'];
		j++;
		line[j] = S[a[j % 2][i] - 'A'];
		j++;
	}
	while (1)
	{
		int	dp[4000] = {0,};

		for (i = 0; i < alen - 1; i++)
			dp[i] = ((line[i] + line[i + 1]) % 10);
		dp[i] = -1;
		for (i = 0; dp[i] != -1; i++)
			line[i] = dp[i];
		line[i] = 0;
		if (alen == 3)
		{
			printf("%d%d\n",line[0], line[1]);
			break ;
		}
		alen--;
	}
}
