#include<stdio.h>

int	main()
{
	int	n;
	int	dp[1000000] = {0,};

	scanf("%d", &n);
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)
		{
			if (dp[i] > dp[i / 2] + 1)
				dp[i] = dp[i / 2] + 1;
		}
		if (i % 3 == 0)
		{
			if (dp[i] > dp[i / 3] + 1)
				dp[i] = dp[i / 3] + 1;
		}
	}
	printf("%d\n", dp[n]);
}
