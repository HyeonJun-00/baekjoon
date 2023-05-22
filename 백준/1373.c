#include<stdio.h>

int	ma(char two[8][4], char *n, int k)
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (two[i][j] == n[i + k])
			j++;
		if (j == 3)
			return i;
		i++;
	}


}

void	cat(char *n, int k)
{
	int	i;
	char	m;
	char	l;
	m = '0';
	i = 0;
	while (k >= i)
	{
		l = n[i];
		n[i] = m;
		m = l;
		i++;
	}
	return ;
}

int	len(char *n)
{
	int	i = 0;
	while (n[i])
		i++;
	return (i);
}

int	main()
{
	char    two[8][4] = {"000", "001", "010", "011", "100", "101", "110", "111"};
	char	n[1000002];
	char	save[340000];
	int	nlen;
	int	j;
	int	k;
	int	i;

	scanf("%s", n);
	nlen = len(n);
	if (nlen % 3 != 0)
		cat(n, nlen);
	i = 0;
	k = 0;
	while (nlen + 1 >= i * 3)
	{
		save[k] = ma(two, n, i) + '0';
		printf("%s, %d\n", n , ma(two, n, i));
		i += 3;
		k++;
	}
	i = 0;
	while (save[i])
	{
		printf("%c", save[i]);

			i++;
	}
}
