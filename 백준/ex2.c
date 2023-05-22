#include<stdio.h>

int	main() {
	int	moves = 4;
	int 	sideLength = 0;
	int	x, y;
	
	scanf("%d %d %d", &sideLength, &x, &y);
	if (x == 1) moves--;
	if (y == 1) moves--;
	if (x == sideLength) moves--;
	if (y == sideLength) moves--;
	printf("%d\n", moves);
}
