#include<stdio.h>

int	Ada(int i, int a100, int a99, int a90, int N, int a) 
{
	if (a < a100) {
		N += (a - a99) * i;
	} else {
		N += a90 * i;
	}
	return N;
}
int	aLen(int a) 
{
	int	i;
	
	i = 0;
	while (a != 0) {
		a /= 10;
		i++;
	}
	return i;
}

int	main() 
{
	
	int	N;
	int	a;
	int	a99 = 0;
	int	a90 = 9;
	int	a100 = 10;

	N = 0;
	scanf("%d", &a);
	for (int i = 1; i <= aLen(a); i++) {
		N = Ada(i, a100, a99, a90, N, a);
		a100 *= 10;
		a90 *= 10;
		a99 *= 10;
		a99 += 9;
	}
	printf("%d\n", N);
}
