#include<stdio.h>

int	main()
{
int	a;
int	count;
int	max[2] = {0,};

for (int i = 0 ; i < 5; i++)
{
	count = 0;
	a = 0;
	for (int j = 0; j < 4; j++)
	{
		scanf("%d", &a);
		count += a;
		if (max[0] < count)
		{
			max[0] = count;
			max[1] = i + 1;
		}
	}	
}
		printf("%d %d\n", max[1], max[0]);
}
