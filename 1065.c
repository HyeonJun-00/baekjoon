#include<stdio.h>

int aa(int n)
{
	int ca[3];
	int g[2];
	int i;

	if (n < 100)
		return (1);
	i = 0;
	while (n != 0)
	{
		ca[i] = n % 10;
		n /= 10;
		i++;
	}
	g[0] = ca[0] - ca[1];
	g[1] = ca[1] - ca[2];
	if (g[0] == g[1])
		return (1);
	return (0);

}

int main()
{
	int a;
	int n;

	a = 0;
	scanf("%d", &n);
	if (n > 999)
		n = 999;
	while (n)
	{
		if (aa(n))
		a++;
		n--;
	}
	printf("%d\n", a);
}
