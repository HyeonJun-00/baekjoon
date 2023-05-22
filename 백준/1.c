#include<stdio.h>

int    main()
{
    char    fan[6] = ":fan:";
    char    a[21];
    scanf("%s", a);
    for (int i = 0; i < 3; i++)
    {
     for (int j = 0; j < 3; j++)
     {
         if (i == 1 && j == 1)
            printf(":%s:", a);
         else
            printf("%s", fan);
     }
        printf("\n");
    }
}
