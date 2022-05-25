#include<stdio.h>

int main()
{
	char	s[100];
	char	a[26];
	int	aa[26];
	int	i;
	int	j;

	scanf("%s", &*s);
	i = 0;
	a[0] = 'a';
		while (a[i] <= 'z')
		{
			aa[i] = -1;
			j = 0;
			while (s[j])
			{
				if (a[i] == s[j])
				{
					aa[i] = j;
					break ;
				}
				j++;
			}
		printf("%d ", aa[i]);
			i++;
			a[i] = i + 'a';
		}
}
