#include<stdio.h>

int	len(char *pl)
{
	int	i;

	i = 0;
	while (pl[i])
		i++;
	return (i);
}

char	*pli(char *pl)
{
	int	i;

	i = 0;
	while (i <  len(pl))
	{
		if (pl[i] != pl[len(pl) - i - 1])
			return ("no");
		i++;
	}
	return ("yes");
}

int	main()
{
	char	pl[6];
	int	i;

	i = 0;
	while (1)
	{
		scanf("%s", pl);
		if (pl[0] == '0')
			break ;
		printf("%s\n", pli(pl));
	}
}
