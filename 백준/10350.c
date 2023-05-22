#include <stdio.h>
#include <stdlib.h>

int     main()
{
        int             n;
        int             *k;
        long long       cnt;
        int             sum;
        int             x;
        int             v;

        scanf(" %d ", &n);
        k = (int *)malloc(sizeof(int) * n * 2);
        sum = 0;
        for (int i = 0; i < n; i++)
        {
                scanf(" %d", &k[i]);
                sum += k[i];
                k[i + n] = k[i];
        }
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
                v = 0;
                for (int j = i; j < i + n; j++)
                {
                        v += k[j];
                        if (v < 0)
                        {
                                x = -v;
                                cnt += (x - 1) / sum + 1;
                        }
                }
        }
        printf("%lld\n", cnt);
}
