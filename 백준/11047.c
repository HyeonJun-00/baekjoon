#include<stdio.h>

int	main()
{
	int	n;
	int	k;
	int	count;

	scanf ("%d", &n);
	int	coin[n];

	count = 0;
	scanf("%d", &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &coin[i]);
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 1; k - coin[i] >= 0; k -= coin[i])
			count++;
	}
	printf("%d\n", count);
}
