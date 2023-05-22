#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	change_ac()
{
	int	i;

	i = 0;
	while (wordlen[i] >= wordlen[n])
	{
		o = 0;
		while (wordlen[i] == wordlen[n] && word[n][o] == word[i][o])
			o++;
		if (word[n][o] < word[i][o])
		strcpy
		i--;
	}
}


void	change(int *wordlen, char **word, int n)
{
	int	i;
	int	j;
	int	le;
	int	o;
	char	h[51];

	i = n - 1;
	while (i > -1)
	{
		if (wordlen[i] >= wordlen[n])
		{
			o = 0;
			while (wordlen[i] == wordlen[n] && word[n][o] == word[i][o])
				o++;
			if (wordlen[i] == wordlen[n] && word[n][o] >= word[i][o])
			break ;
			i--;
		}
		else
			break ;
	}
	strcpy(h, word[n]);
	le = wordlen[n];
	j = n - 1;
	while (j > i)
	{
		strcpy(word[j + 1], word[j]);
		wordlen[j + 1] = wordlen[j];
		j--;
	}
	strcpy(word[j + 1], h);
	wordlen[j + 1] = le;
}

int	main()
{
	char	**word;
	int	*wordlen;
	int	n;
	int	i;

	scanf("%d", &n);
	word = (char **)malloc(sizeof(char*) * n + 2);
	wordlen = (int *)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		word[i] = (char*)malloc(sizeof(char) * 51);
		scanf("%s", word[i]);
		wordlen[i] = strlen(word[i]);
		if (wordlen[i] < wordlen[i - 1])
			change(wordlen, word, i);
		i++;
	}
	i = 0;
	while ()
	{


	}
	i = 0;
	while (i < n)
	{	
		if (i == 0 || strcmp(word[i], word[i - 1]))
		printf("%s\n", word[i]);
		i++;
	}
	free(word);
	free(wordlen);
}
