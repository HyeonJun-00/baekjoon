#include <stdio.h>

void main()
{
	char	word[16];
	int	i;
	int	j;

	scanf("%s", word);
	i = 0;
	j = 0;
	while (word[i])
	{
		if (word[i] >= 'A' && word[i] <= 'C')
			j += 3;
		else if (word[i] >= 'D' && word[i] <= 'F')
			j += 4;
		else if (word[i] >= 'G' && word[i] <= 'I')
			j += 5;
		else if (word[i] >= 'J' && word[i] <= 'L')
			j += 6;
		else if (word[i] >= 'M' && word[i] <= 'O')
			j += 7;
		else if (word[i] >= 'P' && word[i] <= 'S')
			j += 8;
		else if (word[i] >= 'T' && word[i] <= 'V')
			j += 9;
		else if (word[i] >= 'W' && word[i] <= 'Z')
			j += 10;
		i++;
	}
	printf("%d\n", j);
}
