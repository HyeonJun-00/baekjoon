#include<stdio.h>
#include<stdlib.h>

int	len(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int	comp(char *w, char *o)
{
	int	i;

	i = 0;
	while (w[i] == o[i] && w[i])
		i++;
	return (w[i] - o[i]);
}

int	main()
{
	char	**word;
	char	*n;
	int	wordlen;
	int	i;
	int	j;

	scanf("%d", &wordlen);
	word = (char **)malloc(sizeof(char *) * wordlen + 1);
	i = 0;
	while (i < wordlen)
	{
		word[i] = (char *)malloc(sizeof(char) * 51);
		scanf("%s", word[i]);
		i++;
	}
	i = 0;
	while (i < wordlen)
	{
		j = i + 1;
		while (j < wordlen)
		{
			if (len(word[i]) == len(word[j]))
			{
				if (0 < comp(word[i], word[j]))
				{
				n = word[i];
				word[i] = word[j];
				word[j] = n;
				}
			}

			if (len(word[i]) > len(word[j]))
			{
				n = word[i];
				word[i] = word[j];
				word[j] = n;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < wordlen)
	{
		if (i + 1 == wordlen)
			printf("%s\n", word[i]);
		else if (0 != comp(word[i], word[i + 1]))
		printf("%s\n", word[i]);
		i++;
	}
	free(word);
}
