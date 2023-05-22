#include<stdio.h>

int     main()
{
        char    a;
        char    b[6] ={"HICRA"};
        int     HIARC[5] = {0,};
        int     min;
        int     n;

        scanf("%d", &n);
        while (n--)
        {
                scanf(" %c", &a);
                for (int i = 0; i < 6; i++) {
                        if (b[i] == a) {
                                HIARC[i]++;
			}
                }
        }
        min = 1000000;
        for (int i = 0; i < 5; i++) {
                min = HIARC[i] < min ? HIARC[i] : min;
	}
       	printf("%d\n", min);
}
