#include<stdio.h>

int	len(char *A, char *B)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (A[i])
		i++;
	while (B[j])
		j++;
	if (j == i)
		return 1;
	return 0;
}

int     main()
{
	char    Word[2][101];
	int     TestCase;
	int     i;
	int     j;

	scanf("%d", &TestCase);
	i = 0;
	while (i < TestCase)
	{
		int     Abc[2][26] = {0, };
		scanf("%s %s", Word[0], Word[1]);
		j = 0;
		while (Word[0][j])
		{
			Abc[0][Word[0][j] - 'a']++;
			Abc[1][Word[1][j] - 'a']++;
			j++;
		}
		j = 0;
		while (j < 26)
		{
			if (Abc[0][j] != Abc[1][j])
				break ;
			j++;
		}
		if (j == 26 && len(Word[0], Word[1]))
			printf("%s & %s are anagrams.\n", Word[0], Word[1]);
		else
			printf("%s & %s are NOT anagrams.\n", Word[0], Word[1]);
		i++;
	}
}
