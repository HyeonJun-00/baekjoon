#include<stdio.h>

int	len(int i, char *n)
{
	while (n[i])
		i++;
	return i;
}

int	main()
{
	char	n[5];
	int	nlen;
	int	count;

	scanf("%s", n);
	while (n[0] != '0')
	{
		count = 1;
		nlen = len(0, n);
		for (int i = 0; i < nlen; i++)
		{
			count++;
			if (n[i] == '1')
				count += 2;
			else if (n[i] == '0')
				count += 4;
			else
				count += 3;
		}
		printf("%d\n", count);
		scanf("%s", n);
	}
}
