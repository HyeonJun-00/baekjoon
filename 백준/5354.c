#include<stdio.h>

int	main()
{
	int	t;
	int	n;

	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 || j == 0 || i + 1 == n || j + 1 == n) {
					printf("#");
				} else {
					printf("J");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}
