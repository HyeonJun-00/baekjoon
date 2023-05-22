#include<stdio.h>

int	main() {

	int	a[3];
	
	while (1) {
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		if (a[0] == 0 && a[1] == 0 && a[2] == 0) {break;}
		((a[0] + a[1] <= a[2]) || (a[0] + a[2] <= a[1]) || (a[1] + a[2] <= a[0])) && printf("Invalid\n") ||
		((a[0] == a[1] && a[1] == a[2]) && printf("Equilateral\n")) ||
		((a[0] != a[1]) && (a[0] != a[2]) && printf("Scalene\n")) ||
		printf("Isosceles\n");
	}
}
