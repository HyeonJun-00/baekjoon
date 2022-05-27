#include <stdio.h>
#include <stdlib.h>
#define M   1234567891

unsigned long long	pr_save(int i)
{
	int			j;
	unsigned long long	a;

	j = 0;
	a = 1;
	while (j < i)
	{
		a *= 31;
		a %= M;
		j++;
	}
	return (a);
}

int	main()
{
	char			*str;
	int			l;
	int			i;
	unsigned long long	pr;

	pr = 0;
	scanf("%d ", &l);
	str = (char *)malloc(sizeof(char) * (l + 1));
	scanf("%s", str);
	i = 0;
	while (i < l)
	{
		pr += (str[i] - 'a' + 1) * pr_save(i) % M;
		i++;
	}
	pr %= M;
	printf("%llu\n", pr);
}
