#include<stdio.h>

void	save(int *dec)// 소수를 저장 하는 함수
{
	int	a[10000];
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 10000) // 1만 까지의 숫자를 저장
	{
		a[i] = i;
		i++;
	}

	i = 2;
	k = 0;
	while (i < 10000)// 에라토스네테스의 체를 사용해서 소수만 저장
	{
		j = i * i;
		while (j < 10000)
		{
			a[j] = 0;
			j += i;
		}
		if (a[i] != 0)
		{
			dec[k] = a[i];
			k++;
		}
		i++;
	}

}

int	main()
{
	int	dec[1228];// 소수를 저장 할 배열
	int	t;
	int	n;
	int	i;
	int	j;

	scanf("%d", &t);
	save(dec);


	while (t--)// test case 횟수 만큼 실행
	{
		scanf("%d", &n);
		i = 0;
		j = 0;
		while (dec[i] + dec[j] != n) // 반복문 조건
		{
			if (dec[i] >= n / 2)
			{
				j = i;
				while (j > 0)
				{
					if (dec[i] + dec[j] <= n)
						break ;
					j--;
				}
			}
			if (dec[i] + dec[j] == n) // 정답에 도착
				break ;
			i++;
		}
		printf("%d %d\n", dec[j], dec[i]);
	}
}
