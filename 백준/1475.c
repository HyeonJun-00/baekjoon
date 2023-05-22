#include<stdio.h>

int	main()
{
	int	num[9] = {0,};
	char	n[1000000];
	int	max = 0;
	int	i = 0;

	scanf("%s", n);
	for (; n[i]; i++)
	{
		if (n[i] == '9')
			num[6]++;
		else
			num[n[i] - '0']++;
	}
	if (num[6] % 2 != 0)
		num[6] = (num[6] / 2) + 1;
	else
		num[6] /= 2;
	for (i = 0; i < 9; i++)
	{
		if (num[i] > max)
			max = num[i];
	}
	printf("%d\n", max);
}
