#include<stdio.h>


int	main()
{
	int	a;
	int	i;
	int	j;
	int	k;

	scanf("%d", &a);
	i = 2;
	j = 1;
	k = 1;
	while (a != 1)
	{
		if (i % 2 == 0)
		{
			k++;
			a--;
			if (a == 1)
				break ;
			while (j < i)
			{
				a--;
				j++;	
				k--;
				if (a == 1)
					break ;
			}
		}
		else
		{
			j++;
			a--;
			if (a == 1)
				break ;
			while (k < i)
			{
				a--;
				k++;	
				j--;
				if (a == 1)
					break ;
			}

		}
		i++;
	}
	printf("%d/%d\n", j, k);

}
