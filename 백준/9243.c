#include<stdio.h>

int	len(char *str, int i)
{
	while (str[i])
		i++;
	return i;
}

int	main()
{
	int	n;
	int	strlen;
	char	str[2][1001];

	scanf("%d %s %s", &n, str[0], str[1]);
	strlen = len(str[0], 0);
	for (int i = 0; i < strlen; i++)
	{
		if (n % 2 == 0 && str[0][i] != str[1][i])
		{
			printf("Deletion failed\n");
			return 0;
		}
		if (n % 2 == 1 && str[0][i] == str[1][i])
		{
			printf("Deletion failed\n");
			return 0;
		}
	}
		printf("Deletion succeeded\n");
}
