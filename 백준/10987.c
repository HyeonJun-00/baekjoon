#include<stdio.h>

int	main()
{
	char	aeiou[6] = "aeiou";
	char	word[101];
	int	j;
	int	i;
	int	count;

	scanf("%s", word);
	i = 0;
	count = 0;
	while (word[i])
	{
		j = 0;
		while (aeiou[j])
		{
			if (word[i] == aeiou[j])
				count++;
			j++;
		}
		i++;
	}
	printf("%d\n", count);
}
