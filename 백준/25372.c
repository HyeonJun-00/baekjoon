#include<stdio.h>

int	main() 
{
	int	n;
	int	count;
	char	a[21];

	scanf("%d", &n);
	while (n--){
		count = 0;
		scanf("%s", a);
		while (a[count]) {
			count++;
		}
		((count > 5 && count < 10) && (printf("yse\n"))) || (printf("no\n"));
	}
}
