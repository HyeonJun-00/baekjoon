#include<stdio.h>

int     main()
{
	int	n[3];
	int	m;
	int	c;
	
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &n[i]);
		for (int j = 0; j <= i; j++)
		{
			if (n[i] < n[j])
			{
				c = n[i];
				n[i] = n[j];
				n[j] = c;
			}

		}
	}
	printf("%d\n", n[2] + (n[1] - n[0]));
}
