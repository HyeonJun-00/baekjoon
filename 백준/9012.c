#include<stdio.h>
#include<string.h>

int	main()
{
	char	vps;
	int	check[3];
	int	n;

	scanf("%d ", &n);
	while (n--)
	{
		memset(check, 0, 3 * sizeof(int));
		while ((vps = getchar()) != '\n')
		{
			if (vps == '(')
				check[0]++;
			if (vps == ')' && check[0] > check[1])
				check[1]++;
			check[2]++;
		}
		if (check[0] == check[1] && check[0] + check[1] == check[2])
			printf("YES\n");
		else
			printf("NO\n");
	}
}
