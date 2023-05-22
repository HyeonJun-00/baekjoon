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
	int     n;
	int     i;
	int     j;
	int	k[2] = {0,};

	scanf("%d", &n);
	if (n < 8)
	{
		printf("-1\n");
		return 0;
	}
	save(dec);
	if (n % 2 == 1)
		k[1] = 1;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (dec[k[0]] + dec[k[1]] + dec[j] + dec[i] < n)
		{
			if (dec[k[0]] + dec[k[1]] + dec[i] + dec[j] == n)
				break ;
			j++;
		}
		if (dec[k[0]] + dec[k[1]] + dec[i] + dec[j] == n)
			break ;
		i++;
	}
	printf("%d %d %d %d\n", dec[k[0]], dec[k[1]], dec[i], dec[j]);
}
