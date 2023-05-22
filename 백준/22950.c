#include<stdio.h>

int	main()
{
	int	k;
	int	n;

	scanf("%d", &n);
	int	m[1000001];
	for (int i = 0; i < n; i++)
		scanf("%1d", &m[i]);
	scanf("%d", &k);
	if (n == 1 && k == 1 && m[0] == 1)
	{
		printf("YES\n");
		return 0;
	}
	for (int i = 1; i <= k && i <= n; i++)
	{
		if (m[n - i] != 0)
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
}
