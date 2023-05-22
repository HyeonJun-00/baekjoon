#include<stdio.h>

int	root(int plen)
{
	for (int i = 0; 1; i++)
	{
		if (i * i == plen)
			return i;
	}
}

int	len(char *p, int i)
{
	while (p[i])
		i++;
	return i;
}

int	main()
{
	char	p[10001];
	int	t;
	int	k;
	int	plen;
	int	proot;

	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", p);
		plen = len(p, 0);
		proot = root(plen);
		char	w[proot][proot + 1];

		k = 0;
		for (int i = 0; i < proot; i++)
		{
			for (int j = 0; j < proot; j++)
			{
				w[i][j] = p[k];
				k++;
			}
		}
		for (int i = proot - 1; i >= 0; i--)
		{
			for (int j = 0; j < proot; j++)
				printf("%c", w[j][i]);
		}
		printf("\n");
	}
}
