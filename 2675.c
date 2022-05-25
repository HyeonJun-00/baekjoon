#include<stdio.h>

int main()
{

	char	s[20];
	char	p[161];
	int	t;
	int	r;
	int	i;
	int	k;
	int	j;

	scanf("%d", &t);
	k = 0;
	while (t--)
	{
		i = 0;
		scanf("%d %s", &r, s);
		while(s[i])
		{
			j = 0;
			while(r > j)
			{
				p[k] = s[i];
				j++;
				k++;
			}	
			i++;
		}
		if (t > 0)
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
		printf("%s\n",p);

}
