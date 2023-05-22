#include<stdio.h>

int	main()
{
	char	t[1000];
	char	m[6] = "BSGPD";
	int	T[1000];
	int	check[2] = {0, };
	int	n;
	int	k;

	scanf("%d", &n);
	k = 0;
	for (int i = 0; i < n; i++)
	{
		scanf(" %c%d", &t[i], &T[i]);
		for (int j = 0; j < 5; j++)
		{
			if (t[i] == m[j])
				t[i] = j;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (k == 1)
			break ;
		if (t[i] > t[i + 1])
			check[k++] = i;
		if (t[i] == t[i - 1] && T[i] < T[i - 1])
			check[k++] = i;
	}

	for (int i = 0; i < n; i++)
	{
		if (k == 2)
			break ;
		if (t[check[0]] != t[i])
		{
		if (t[i - 1] == t[check[0]] && T[i - 1] > T[check[0]])
			check[k++] = i;
		if (t[check[0]] > t[i - 1] && t[check[0]] < t[i + 1])
			check[k++] = i;
		if (t[check[0]] > t[i - 1] && t[check[0]] < t[i + 1])
			check[k++] = i;
		}

	}
	if (k == 2 && check[0] != check[1])
	{
		printf("KO\n");
		printf("%c%d %c%d\n", m[t[check[1]]], T[check[1]] , m[t[check[0]]], T[check[0]]);
	}
	else
		printf("OK\n");
}
