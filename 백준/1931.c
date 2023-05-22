#include <stdio.h>
#include <stdlib.h>

void	sf(int *t)
{




}


int	main()
{
	int	n;
	int	**t;
	int	cut;
	int	ck[2];
    
	scanf("%d", &n);
	t = (int **)malloc(sizeof(int *) * n);
	for (int i = 0; i < n; i++)
	{
		t[i] = (int *)malloc(sizeof(int ) * 2);
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &t[i][j]);
		}
	}
	ck[0] = 2147483647;
	for (int i = 0; i < n; i++)
	{
		if (t[i][1] <= ck[0])
		{
			ck[0] = t[i][1];
			ck[1] = i;
		}
	}
	for ()
	{






	}
	printf("%d, %d\n", ck[1], ck[2]);
}
