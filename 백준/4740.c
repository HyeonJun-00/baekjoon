#include<stdio.h>

int	main()
{
	int	alen(char a[], int i){ while(a[i]) i++; return i;}
	char	a[81];

	int asd() {
		scanf("%[^\n]", a);
		if (a[0] == '*' && a[1] == '*' && a[2] == '*') {
			return 0;
		}
		for (int i = alen(a, 0) - 1; i >= 0; i--){
			printf("%c", a[i]);
		}
		printf("\n");
	}
	while (asd()){
	}
}
