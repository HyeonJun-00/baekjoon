#include<stdio.h>

int	main()
{
	char	s;
	char	c;
	int	cont[2] = {0,};

	scanf("%c", &s);
	c = s;
	while ((s = getchar()) != '\n')
	{
		if (c == '1' && s == '0')
			cont[0]++;
		if (c == '0' && s == '1')
			cont[1]++;
		c = s;
	}
		if (c == '1' && s == '\n')
			cont[0]++;
		if (c == '0' && s == '\n')
			cont[1]++;
	printf("%d\n", cont[1] < cont[0] ? cont[1] : cont[0]);
}
