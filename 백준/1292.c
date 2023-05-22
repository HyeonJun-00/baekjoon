#include<stdio.h>

int	main()
{
	int	a[2000];
	int	i; // index를 증가 시키기 위한 변수
	int	k; // c를 증가 시키기며 두 번째 조건문을 끝내기 위한 변수
	int	c; // 첫 번째 조건문을 끝내기 위한 변수
	int	u;
	int	AB[2]; // 총합을 구하고 싶은 인덱스의 위치
	int	count; // 총합을 구하는 변수

	scanf("%d %d", &AB[0], &AB[1]);
	i = 0;
	c = 0;
	u = 0;
	while (c < 1000)
	{
		k = 0;
		while (i >= k)
		{
			a[u] = i + 1;
			u++;
			k++;
		}
		c += k;
		i++;
	}
	i = AB[0] - 1;
	count = 0;
	while (i < AB[1])
	{
		count += a[i];
		i++;
	}
	printf("%d\n", count);
}
