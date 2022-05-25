#include<stdio.h>

int fi(int n) 
{
    if (n == 1 || n == 2)
	    return (1);
    else if (n > 2)
    return (fi(n - 1) + fi(n - 2));
    return (0);
}

int main()
{
int n;

scanf("%d", &n);
printf("%d %d\n", fi(n), n-2);
}
