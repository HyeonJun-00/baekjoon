#include<stdio.h>

int main()
{
	int n[4];
	int p;
	int num;
	int i;
	int c;

	scanf("%d %d", &num, &p);
	i = 0;
	c = 0;
	n[0] = 500;
	n[1] = p / 10;
	n[2] = 2000;
	n[3] = p / 4;
	while(i < num / 5 && i < 4)
	{
		if (n[i] > c)
			c = n[i];
		i++;
	}
	p -= c;
	if (p < 0)
		printf("0\n");
	else
	printf("%d\n", p);
}
