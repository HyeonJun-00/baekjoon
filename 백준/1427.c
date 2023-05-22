#include<stdio.h>

int	len(int i, char *n)
{
	while (n[i])
		i++;
	return i;
}

int	main()
{
	char	n[11];
	char	s;
	int	nlen;

	scanf("%s", n);
	nlen = len(0, n);
	for (int i = 0; i < nlen; i++)
	{
		for (int j = 0; j < nlen; j++)
		{
			if (n[i] > n[j])
			{
				s = n[i];
				n[i] = n[j];
				n[j] = s;
			}
		}
	}
	printf("%s\n", n);
}
