#include<stdio.h>
#include<stdlib.h>

int	check(char a, char b, int i)
{
	int	j;

	j = 0;
	if (a == 'B')
	{
	if (i % 2 == 1 && b != 'W')
		j++;
	if (i % 2 != 1 && b != 'B')
		j++;
	}
	if (a == 'W')
	{
	if (i % 2 == 1 && b != 'B')
		j++;
	if (i % 2 != 1 && b != 'W')
		j++;
	}
	return (j);
}

int	main()
{
	char	**b;
	int	h, hh;
	int	i, ii;
	int	j, jj;
	int	k, kk;

	scanf("%d %d", &i, &j);
	b = (char **)malloc(sizeof(char *) * i + 1);
	ii = 0;
	while (i > ii)
	{
		b[ii] = (char *)malloc(sizeof(char) * j + 1);
		jj = 0;
		while (j > jj)
		{
			scanf("%c", &b[ii][jj]);
			jj++;
		}
		b[ii][jj] = '\0';
		ii++;
	}
	hh = 50;
	k = 0;
	while (i - k > 7)
	{
		kk = 0;
		while (j - kk > 7)
		{
			ii = k;
			h = 0;
			while (i > ii && ii < k + 8)
			{
				jj = kk;
				while (j > jj && jj < kk + 8)
				{
					h += check(b[k][0], b[ii][jj], ii % 2 + jj % 2);
					jj++;
				}
				ii++;
			}
			if (h >= 32)
				h = 64 - h;
			if (h < hh)
				hh = h;
			kk++;
		}
		k++;
	}
	printf("%d\n", hh);
}
