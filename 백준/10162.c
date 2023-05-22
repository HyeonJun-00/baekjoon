#include<stdio.h>

int    main() {
	int    a;
	int    count[3] = {0,};

	scanf("%d", &a);
	if (a % 10 > 0) {
		printf("-1\n");
		return 0;
	}
	while (a - 300 >= 0) {
		a -= 300;
		count[0]++;
	}
	while (a - 60 >= 0) {
		a -= 60;
		count[1]++;
	}
	while (a - 10 >= 0) {
		a -= 10;
		count[2]++;
	}
	printf("%d %d %d\n", count[0], count[1], count[2]);
}
