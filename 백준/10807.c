#include<stdio.h>

int	main()
{
	int	a[201] = {0,};
	int	n;
	int	count;
	int	v;

	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &count);
		a[count + 100]++;
	}
	scanf("%d", &v);
	printf("%d\n", a[v + 100]);
}
