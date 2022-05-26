#include<stdio.h>

void	print()
{
	int	h;
	int	w;
	int	n;
	int	i;
	int	j;

	scanf("%d%d%d", &h, &w, &n);
	i = 0;
	while (n > 0)
	{
		if (i == w)
			i = 0;
		j = 0;
		while (h > j && n > 0)
		{
			n--;
			j++;
		}
		i++;
	}
	if (i > 9)
		printf("%d%d\n", j, i);
	else
		printf("%d0%d\n", j, i);
}

int	main()
{
	int	i;
	int	j;

	scanf("%d", &i);
	j = 0;
	while(j++ != i)
		print();
}
