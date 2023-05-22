#include<stdio.h>

int	len(int i, char *word)
{
	while (word[i])
		i++;
	return i;
}

int	main()
{
	int	t;
	int	i;
	int	count[2] = {0,};
	int	wordlen;
	char	word[100001];

	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", word);
		wordlen = len(0, word);
		if (wordlen % 2 == 0)
		{
			count[0] = 0;
			for (i = 0; i < wordlen; i += 2)
			{
				if (word[i] != word[i + 1])
					break ;
			}
			if (i == wordlen)
				count[0] = 1;
			wordlen /= 2;
			for (i = 0; i < wordlen; i++)
			{
				if (word[i] != word[i + wordlen])
					break ;
			}
			if (i == wordlen)
				count[0] = 1;
		}
		if (count[0] == 1)
			count[1]++;

	}
		printf("%d\n", count[1]);
}
