#include<stdio.h>

int dd(int d)
{
	int a;
	int b;
	int i;
	
	i = 1;
	while (i <= 10000)
	{
		b = i;
		a = i;
		while (b != 0)
		{
			a += b % 10;
			b /= 10;
		}
		if (a == d)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	int	i;

	i = 1;
	while (i <= 10000)
	{
		if (dd(i))
			printf("%d\n", i);
		i++;
	}
}
