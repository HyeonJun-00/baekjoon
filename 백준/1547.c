#include<stdio.h>

int	main() {

	int	num[3] = {1, 0, 0};
	int	n[2];
	int	a;
	int	t;

	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &n[0], &n[1]);
		a = num[n[0] - 1];
		num[n[0] - 1] = num[n[1] - 1];
		num[n[1] - 1] = a;
	}
	(num[0] != num[1])&&(a = num[0] > num[1] ? 1 : 2);
	(num[1] != num[2])&&(a = num[1] > num[2] ? 2 : 3);
	(num[2] != num[0])&&(a = num[2] > num[0] ? 3 : 1);
	printf("%d\n", a);
}
