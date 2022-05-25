#include<stdio.h>

int ren1(int i, char *g)
{
	while (g[i])
		i++;
	return (i);
}

void pr(char *A, char *B)
{
	int	i;
	int	v;
	int	k;
	char	h[1001];
	k = 0;
	i = 0;
	while (A[i] || B[i])
	{
		v = 0;
		if (k == 1)
		{
			v = 1;
			k = 0;
		}
		if (i < ren1(0, A) && i < ren1(0, B))
			v += (A[i] - '0') + (B[i] - '0');
		else if (ren1(0, B) > i)
			v += (B[i] - '0');
		else if (ren1(0, A) > i)
			v += (A[i] - '0');
		if (v > 9)
		{
			v -= 10;
			k++;
		}
		h[i] = v + '0';
		i++;
	}
	if (k == 1)
	{
	h[i] = '1';
	i++;
	}
	h[i] = '\0';
	i--;
	while(i >= 0)
	{
	printf("%c", h[i]);
		i--;
	}
	printf("\n");
}

void rv(char *A, char *B)
{
	int	i;
	int	ren;
	char	a;

	ren = ren1(0, A);
	i = 0;
	while (ren / 2 > i)
	{
		a = A[i];
		A[i] = A[ren - i - 1];
		A[ren - i - 1] = a;
		i++;
	}
	ren = ren1(0, B);
	i = 0;
	while (ren / 2 > i)
	{
		a = B[i];
		B[i] = B[ren - i - 1];
		B[ren - i - 1] = a;
		i++;
	}
}

int main()
{
	char	A[1001];
	char	B[1001];

	scanf("%s %s", &*A, &*B);
	rv(A, B);
	pr(A, B);

}
