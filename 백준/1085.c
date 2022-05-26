#include<stdio.h>

int main()
{
        int     a[4];
        int     i;
        int     xx;
        int     yy;

        i = -1;
        while (++i < 4)
                scanf(" %d ", &a[i]);
        if (a[0] >= (double)a[2] / 2)
                xx = a[2] - a[0];
        else
                xx = a[0];
        if (a[1] >= (double)a[3] / 2)
                yy = a[3] - a[1];
        else
                yy = a[1];
        if (yy >= xx)
                printf("%d\n", xx);
        else
                printf("%d\n", yy);
}
