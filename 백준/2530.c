#include<stdio.h>

int	main() {
	int	h, m, s;
	int	t;

	scanf("%d %d %d %d", &h, &m, &s, &t);
	(s += t % 60), (m += t / 60);
	(s > 59) && (m += s / 60) && (s = s % 60),
	(m > 59) && (h += m / 60) && (m = m % 60),
	(h > 23) && (h = h % 24);
	printf("%d %d %d\n", h, m, s);
}
