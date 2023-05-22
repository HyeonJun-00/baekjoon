#include <stdio.h>
#include <stdlib.h>

int     main()
{
        int     *n;
        int     t;
        int     k;
        int     i;
        int     j;
	int	e;

        scanf("%d %d", &t, &e);
        n = (int*)malloc((sizeof(int)) * t);
        i = 0;
        while (i < t)
        {
                scanf("%d", &n[i]);
                i++;
        }
        i = 0;
        while (i < t)
        {
                j = i;
                while (j < t)
                {
                        if (n[i] >= n[j])
                        {
                                k = n[i];
                                n[i] = n[j];
                                n[j] = k;
                        }
                        j++;
                }
                i++;
        }
        i = 0;
        while (i < t)
        {	
		if (i == e - 1)
                printf("%d\n", n[i]);
                i++;
        }
}
