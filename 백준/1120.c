#include<stdio.h>

int	complen(int ABlen, int j, char *A, char *B)
{
	int	count;

	count = 0;
	for (int i = 0; A[i]; i++)
		count += (A[i] == B[i + j] ? 0 : 1);
	return ABlen < count ? ABlen : count;
}

int	len(int i, char *len)
{
	while (len[i])
		i++;
	return i;
}

int	main()
{
	char	A[51];
	char	B[51];
	int	ABlen = 50;

	scanf("%s %s", A, B);
	int	Alen = len(0, A);
	int	Blen = len(0, B);

	for (int i = 0; i + Alen <= Blen; i++)
		ABlen = complen(ABlen, i, A, B);
	printf("%d\n", ABlen);
}
