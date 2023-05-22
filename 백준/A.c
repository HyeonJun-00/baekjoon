#include<stdio.h>

int	main()
{
	int	n;
	scanf("%d", &n);
	int	a[n];
	int	count;
	int	c;

	count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		for (int j = 0; j < i; j++)
		{
			if (a[i] >= a[j])
			{
				c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; a[i] != 0;)
		{
			if (a[j] <= 0)
				j++;
			else
			{
				if (j >= 0)
					a[j]--;
				a[i]--;
				count++;
			}
		}
	}
	if (count > 1440)
		printf ("-1\n");
	else
		printf("%d\n", count);

}
