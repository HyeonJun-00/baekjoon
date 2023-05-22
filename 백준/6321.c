#include<stdio.h>

int     len(char *str, int i)
{
        while (str[i])
                i++;
        return i;
}

int     main()
{
        int     t;
        char    str[51];

        scanf("%d", &t);
        for (int i = 0; i < t; i++)
        {
                scanf("%s", str);
                for (int j = 0; j < len(str, 0); j++)
                {
                        if (str[j] == 'Z')
                                str[j] = 'A';
                        else
                                str[j] += 1;
                }
                printf("String #%d\n%s\n\n", i + 1, str);
        }
}
