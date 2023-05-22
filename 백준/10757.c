#include<stdio.h>

int len(char *g)
{
        int     i;

        i = 0;
        while (g[i])
                i++;
        return (i);
}

void pr(char *A, char *B)
{
        char    h[10002];
        int     i;
        int     v;
        int     k;

        k = 0;
        i = 0;
        while (i < len(A)|| i < len(B))
        {
                v = k;
                k = 0;
                if (len(B) > i)
                        v += (B[i] - '0');
                if (len(A) > i)
                        v += (A[i] - '0');
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

char *rv(char *A)
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
    return (A);
}

int main()
{
        char    A[10001];
        char    B[10001];

        scanf("%s %s", A, B);
        pr(rv(A), rv(B));
}
