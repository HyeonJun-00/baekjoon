#include<stdio.h>

void	ver2(int n)
{
	int	i;

	i = 0;
	while (i < n * 3)
	{
		printf(" ");
		i++;
	}

}

void	ver(int	n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("@");
		i++;
	}
	ver2(n);
	i = 0;
	while (i < n)
	{
		printf("@");
		i++;
	}
	printf("\n");

}

void	hor(int n)
{
	int	i;

	i = 0;
	while (i < n * 5)
	{
		printf("@");
		i++;
	}
	printf("\n");

}

int	main()
{
	int	n;
	int	i;

	scanf("%d", &n);
	i = 0;
	while (i < n * 2)
	{
		ver(n);
		i++;
	}
	i = 0;
	while (i < n)
	{
		hor(n);
		i++;
	}
	i = 0;
	while (i < n)
	{
		ver(n);
		i++;
	}
	i = 0;
	while (i < n)
	{
		hor(n);
		i++;
	}
}
