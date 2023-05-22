#include<stdio.h>

int	wordlen(char *word)
{
	int	i;
	int	count = 0;

	i = 0;
	while (word[i])
	{
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] =='u')
			count++;
		if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] =='U')
			count++;
		i++;
	}
	return count;
}

int	main()
{
	char	word[412];

	for (int j = 0; 1; j++)
	{
		word[0] = 0;
		scanf(" %[^\n]", word);
		if (word[0] == '#')
			return 0;
		printf("%d\n", wordlen(word));
	}
}
