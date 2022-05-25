#include<stdio.h>

void	abcd(char *abc)
{
	int	i;

	i = 0;
	while (i < 26)
	{
		abc[i] = i + 'a';
		i++;
	}
}

int	word_check(char *word, char *abc)
{
	int	i;
	int	j;

	i = 0;
	while (word[i] != '\0')
	{
		j = 0;
		while (j < 28)
		{
			if (word[i] == abc[j])
			{
				i++;
				if (word[i] != abc[j])
				{
					abc[j] = '0';
					break ;
				}
			}
			else if (j == 27)
				return (0);
			else if (word[i] != abc[j])
				j++;
		}
	}
	return (1);
}

int	main()
{
	char	word[101];
	char	abc[27];
	int	n;
	int	check;

	check = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", word);
		abcd(abc);
		check += word_check(word, abc);	
	}
	printf("%d\n", check);
}
