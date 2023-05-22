#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int	x;
	int	n;
	int	t;

	t = 0;
	scanf("%d %d", &x, &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		t += a * b;
	}
	if (x == t)
		printf("Yes\n");
	else
		printf("No\n");
}
