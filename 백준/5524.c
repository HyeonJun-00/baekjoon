#include<stdio.h>

int	main()
{
	int	t;
	char	a[21];

	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", a);
		for (int i = 0; a[i]; i++)
		{
			if (a[i] >= 'A' && a[i] <= 'Z')
				a[i] += 32;
		}
		printf("%s\n", a);
	}
}
