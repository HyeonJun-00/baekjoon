#include<stdio.h>

long long	dp[100] = {0,};

long long	koong(long long n)
{
	if (dp[n] == 0)
		koong(n - 1);
	return dp[n] = dp[n - 1] + dp[n - 2] + dp[n - 3] + dp[n - 4];
}

int	main()
{
	int	n;
	int	t;

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		if (n == 0)
			printf("1\n");
		else
		printf("%lld\n", koong(n));
	}
}
