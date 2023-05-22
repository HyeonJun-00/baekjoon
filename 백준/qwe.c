#include <stdio.h>

char	cmp(char *a, char *b)
{
	int	i = 0;

	while (a[i] && a[i] == b[i])
		i++;
	i--;
	return a[i] - b[i];
}

int	main()
{
	int	n;
	int	dn;

	scanf("%d", &n);
	dn = n * 2;
	char	a[dn][21];

	for (int i = 0; i < dn; i++)
	{
		scanf("%s", a[i]);
		for (int j = 0; j < i; j++)
		{
			if (cmp(a[i], a[j]) == 0)
			{
				dn--;
				i--;
				break ;
			}
		}
	}
	printf("%d\n", dn);




}
