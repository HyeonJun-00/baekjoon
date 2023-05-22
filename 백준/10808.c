#include<stdio.h>

int    main()
{
    int    i;
    int    j;
    int    count[28] = {0};
    char   s[101];
    
    scanf("%s", s);
    i = 0;
    while (i + 'a' <= 'z')
    {
        j = 0;
        while (s[j])
        {
            if (i + 'a' == s[j])
                count[i]++;
            j++;
        }
        printf("%d ", count[i]);
        i++;
    }
    printf("\n");
}
