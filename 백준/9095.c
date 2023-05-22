#include<stdio.h>

int	main()
{
	int	t;
	int	n;
	int	dp[11];

	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;
	scanf("%d", &t);
	for (int i = 3; i < 11; i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	while (t--)
	{
		scanf("%d", &n);
		printf("%d\n", dp[n - 1]);
	}
}
