#include<stdio.h>

int	main()
{
	int	t;
	int	sum;
	int	a;
	int	min;

	scanf("%d", &t);
	while (t--) {
		min = 100;
		sum = 0;
		for (int i = 0; i < 7; i++) {
			scanf("%d", &a);
			(a % 2 == 0) && (sum += a) && (a <= min) && (min = a);
		}
		printf("%d %d\n", sum, min);
	}
}
