#include<stdio.h>

int len(char *a)
{
	int i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int main()
{
	char	c[101];
	int	i;
	int	check;

	scanf("%s", c);
	check = len(c);
	i = 0;
	while (len(c) > i)
	{
		if(c[i] == '=') 
		{ 
			if(c[i - 1] == 'c') 
				check--; 
			if(c[i - 1] == 's') 
				check--; 
			if(c[i - 1] == 'z') 
			{ 
				check--; 
				if(c[i - 2] == 'd') 
					check--; 
			} 
		} 
		if(c[i] == '-') 
		{ 
			if(c[i - 1] == 'c')
				check--; 
			if(c[i - 1] == 'd') 
				check--; 
		} 
		if(c[i] == 'j') 
		{ 
			if(c[i - 1] == 'l')
				check--; 
			if(c[i - 1] == 'n') 
				check--; 

		}
		i++;
	}
	printf("%d\n", check);
}
