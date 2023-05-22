#include<stdio.h>

int	main()
{
	int	n;
	int	m;

	scanf("%d %d", &n, &m);
	n -= m;
	if (n >= 0)
		printf("Congratulations, you are within the speed limit!\n");
	else
	{
		if (n >= -20)
			printf("You are speeding and your fine is $100.\n");
		else if (n >= -30)
			printf("You are speeding and your fine is $270.\n");
		else
			printf("You are speeding and your fine is $500.\n");
	}
}
