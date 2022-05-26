#include<stdio.h>

int main(void)
{
	int	ten[10];
	int	ct;
	int	j;
	int	i;

	ct = 0;
	i = 0;
	while (i < 10)
	{
		scanf("%d", &ten[i]);
		ten[i] %= 42;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (i != 10 && j != 10)
		{
			if (ten[i] == ten[j])
			{
				ct++;
				break;
			}
			j++;
		}
		i++;
	}
	printf("%d\n", 10 - ct);
}
