#include<stdio.h>
#include<stdlib.h>

int     main()
{
        char    *web;
        int     N;
        int     i;

        scanf("%d", &N);
        i = 0;
        while (i < N)
        {
                web = (char *)malloc(sizeof(char) * 51);
		getchar();
                scanf("%[^\n]", web);
                printf("%d. %s\n", i + 1, web);
                i++;
	}

}
