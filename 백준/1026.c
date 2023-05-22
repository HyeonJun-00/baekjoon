#include<stdio.h>

int	main()
{
	int	n;
	int	kk;
	int	c;
	int	sum;

	scanf("%d", &n);
	int	a[n];
	int	b[n];

	sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		kk = i;
		for (int k = i - 1; a[kk] > a[k] && k >= 0; k--)
		{
			c = a[k];
			a[k] = a[kk];
			a[kk] = c;	
			kk--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
		kk = i;
		for (int k = i - 1; b[kk] < b[k] && k >= 0; k--)
		{
			c = b[k];
			b[k] = b[kk];
			b[kk] = c;	
			kk--;
		}
	}
	for (int i = 0; i < n; i++)
		sum += (b[i] * a[i]);
	printf("%d\n", sum);
}
