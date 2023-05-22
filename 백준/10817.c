#include<stdio.h>
int    main()
{
	int    n[3];
	int    m;
	int    i, j;

	i = 0;
	while (i < 3)
	{
		scanf("%d", &n[i]);
		j = i;
		while (j != 0 && n[j] < n[j - 1])
		{
			m = n[j];
			n[j] = n[j - 1];
			n[j - 1] = m;
			j--;
		}
		i++;
	}
	printf("%d\n", n[1]);
}
