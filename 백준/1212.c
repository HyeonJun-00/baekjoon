#include<stdio.h>

int	main()
{
	char	two[8][4] = {"000", "001", "010", "011", "100", "101", "110", "111"};
	char	check[333334];
	int	m;
	int	i;

	scanf("%s", check);
	m = 0;
	i = 0;
	while (check[i])
	{
		if (m == 0 && two[check[i] - '0'][0] == '0')
		{
			if (two[check[i] - '0'][1] != '0')
			printf("%c%c", two[check[i] - '0'][1], two[check[i] - '0'][2]);
			else
			printf("%c", two[check[i] - '0'][2]);
		}
		else
			printf("%s",two[check[i] - '0']);
		i++;
		m++;
	}
	printf("\n");
}
