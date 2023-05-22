#include<stdio.h>

void    save(char *pl, char c, int n, int i)
{
	while (i <= n)
	{
		pl[i] = c;
		i++;
	}
	pl[i] = '\0';
}

int     len(char *X, int i)
{
	while (X[i])
		i++;
	return i;
}

int     main()
{
	int     count;
	int     Xlen;
	char    pl[100];
	char    X[100];

	scanf("%s", X);
	Xlen = len(X, 0);
	count = 0;
	for (int i = 0; i < Xlen; i++)
	{
		if (X[i] == 'X')
			count++;
		else
		{
			pl[i] = '.';
			pl[i + 1] = '\0';
		}
		if (count == 3 || count == 1)
		{
			if (X[i + 1] == '.' || X[i + 1] == '\0')
			{
				printf("-1\n");
				return 0;
			}
		}
		if (count == 4)
		{
			save(pl, 'A', i, i - 3);
			count = 0;
		}
		if (count == 2 && X[i + 1] == '.' || count == 2 && X[i + 1] == '\0')
		{
			save(pl, 'B', i, i - 1);
			count = 0;
		}
	}
	printf("%s\n", pl);
}
