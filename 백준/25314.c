#include<stdio.h>

int    main()
{
    int    n;
    
    scanf("%d", &n);
    for (int i = 1; i * 4 <= n; i++)
        printf("long ");
    printf("int\n");
}
