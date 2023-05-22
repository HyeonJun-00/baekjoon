#include<stdio.h>

int	main()
{
	int	A[9];
	int	B[9];
	int	scoer[2] = {0, };
	int	count = 0;

	for (int i = 0; i < 9; i++)
		scanf("%d", &A[i]);
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &B[i]);
		scoer[0] += A[i];
		if (scoer[0] > scoer[1])
			count++;
		scoer[1] += B[i];
	}
	if (count > 0 && scoer[0] < scoer[1])
		printf("Yes\n");
	else
		printf("No\n");
}
