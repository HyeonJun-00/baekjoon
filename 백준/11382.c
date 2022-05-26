#include<stdio.h>

int len(char *g)
{
	int	i;

	i = 0;
        while (g[i])
                i++;
        return (i);
}

void pr(char *A, char *B, char *C)
{
	char    h[1002];
        int     i;
        int     v;
        int     k;
        
        k = 0;
        i = 0;
	while (i < len(A)|| i < len(B) || i < len(C))
	{
		v = k;
		k = 0;
		if (len(B) > i)
			v += (B[i] - '0');
		if (len(A) > i)
			v += (A[i] - '0');
		if (len(C) > i)
			v += (C[i] - '0');
		while (v > 9)
		{
			v -= 10;
			k++;
		}
                h[i] = v + '0';
                i++;
        }
	if (k > 0)
	h[i++] = k + '0';
        h[i] = '\0';
        while(--i >= 0)
        printf("%c", h[i]);
        printf("\n");
}

void rv(char *A)
{
        int     i;
        int     len1;
        char    a;

        len1 = len(A);
        i = 0;
        while (len1 / 2 > i)
        {
                a = A[i];
                A[i] = A[len1 - i - 1];
                A[len1 - i - 1] = a;
                i++;
        }
}

int main()
{
        char    A[1001];
        char    B[1001];
	char    C[1001];

        scanf("%s %s %s", A, B, C);
        rv(A);
	rv(B);
 	rv(C);
        pr(A, B, C);
}
