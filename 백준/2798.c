#include<stdio.h>
#include<stdlib.h>

int	sc(void)
{
	int	n;

	scanf("%d", &n);
	return (n);
}

void	n_save(int *n, int nlen)
{
	int	i;

	i = 0;
	while (nlen > i)
	{
		scanf("%d", &n[i]);	
		i++;
	}
}

int	pn(int nlen, int *n, int m)
{
	int	i[3];
	int	h;
	int	k;

	i[0] = 0;
	h = 0;
	while (i[0] < nlen)
	{
		i[1] = i[0] + 1;
		while (i[1] < nlen)
		{
			i[2] = i[1] + 1;
			while (i[2] < nlen)
			{
				k =  n[i[0]] + n[i[1]] + n[i[2]];
				if (k <= m && k > h)
					h = n[i[0]] + n[i[1]] + n[i[2]];
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
	return (h);
}
int	main()
{
	int	*n;
	int	nlen;
	int	m;

	nlen = sc();
	n = (int *)malloc(sizeof(int) * nlen);
	scanf("%d", &m);
	n_save(n, nlen);
	printf("%d\n", pn(nlen, n, m));
}
