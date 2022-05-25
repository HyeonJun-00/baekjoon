#include<stdio.h>

int main()
{
	char	word[1000001];
	int	i;
	int	c;

	c = 1;
	i = 0;
	scanf("%[a-z A-z]", word);
	while (word[i])
	{
		if (word[i] == ' ' && word[i + 1] != '\0' && i != 0)
			c++;
		i++;
	}
	if(i == 0 || (word[0] == ' ' && i == 1))
		c = 0;
	printf("%d\n", c);
}
