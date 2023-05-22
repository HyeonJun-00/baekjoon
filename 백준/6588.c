#include<stdio.h>

void    save(int *dec)// 소수를 저장 하는 함수
{
        int     a[1000000];
        int     i;
        int     j;
        int     k;

        i = 0;
        while (i < 1000000)
        {
                a[i] = i;
                i++;
        }
        i = 2;
        k = 0;
        while (i < 10000)
        {
                j = i * i;
                while (j < 1000000 && a[i] != 0)
                {
			a[j] = 0;
			j += i;
		}
		i++;
	}
	i = 2;
	while (i < 1000000)
	{
		if (a[i] != 0)
		{
			dec[k] = a[i];
			k++;
		}
		i++;
	}
}

int     main()
{
        int     dec[100000];
        int     t;
        int     n;
	int     i;
	int     j;

	scanf("%d", &n);
	save(dec);
	while (n != 0)
	{
		i = 1;
		while (i < n)
		{
			j = 1;
			while (dec[j] + dec[i] < n)
			{
				if (dec[i] + dec[j] == n)
					break ;
				j++;
			}
			if (dec[i] + dec[j] == n)
				break ;
			i++;
		}
		printf("%d = %d + %d\n", n, dec[i], dec[j]);
		scanf("%d", &n);
	}
}
