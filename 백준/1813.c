#include <stdio.h>

int	main()
{
	int	n; // 입력 값의 갯수
	int	i; // 입력 값
	int	j; // 반복문을 위한 변수
	int	check; // 모순인지 확인을 위한 변수
	int	count[51] = {0,}; // 참인지 거짓인지 확인을 위한 변수

	scanf("%d", &n);
	j = 0;
	check = 0;
	while (j < n)
	{
		scanf("%d", &i);
		if (i == 0) // 0이 입력값으로 들어왔는지 확인
			check++;
		count[i]++; // 카운트 배열로 저장
		j++;
	}
	j = 50;
	while (j > 0)
	{
		if (count[j] == j) // 배열의 위치와 크기가 같다면 참
			break ;
		j--;
	}
	if (check != 0 && j < 1) // 만약 0이 들어왔는데 참이 없다면 모순
		j--;
	printf("%d\n", j);
}
