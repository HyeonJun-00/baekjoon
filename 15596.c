#include<stdio.h>

long long sum(int *a, int n)
{
long long	b;

while (--n >= 0)
	b += a[n];
return (b);
}
