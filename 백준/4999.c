#include<stdio.h>

char *wordlen(char *a, char *b)
{
	int    i;

	i = 0;
	while (a[i] && b[i])        
		i++;
	if (b[i] == 0)
		return ("go");
	return ("no");
}

int     main()
{
	char a[1000];
	char b[1000];

	scanf("%s %s", a, b);
	printf("%s\n", wordlen(a, b));    
}
