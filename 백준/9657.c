#include<stdio.h>

int	main()
{
	int 	n;
	int	stone[1001];

	scanf("%d", &n);
	stone[1] = 1;
	stone[2] = 0;
	stone[3] = 1;
	stone[4] = 1;
	for (i = 5; i < 1001; i++)
	{
		if (stone[i - 1] + stone[i - 3] + stone[i - 4] == 3)
			stone[i] = 0;
		else
			stone[i] = 1;
	}

	if (stone[n] == 1)
		printf("SK\n");
	else
		printf("CY\n");
}
