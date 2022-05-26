#include<stdio.h>

int index_chek(char *a, int *abc, int q, char h)
{
	for (int i = 0; a[i]; i++)
	{
		h = 'A';
		for (int j = 0; h <= 'Z'; j++)
		{
			if (h == a[i] || h + 32 == a[i])
				abc[j]++;
			if (abc[j] > q)
				q = abc[j];
			h++;
		}
	}
	return (q);
}

int main()
{
	char	a[1000001];
	int	abc[26];
	int	t;
	int	q;

	scanf("%s", a);
	for (int i = 0; i < 26; i++)
		abc[i] = 0;
	q = index_chek(a, abc, 0, 0);
	t = 0;
	for (int i = 0; i < 26; i++)
	{
		for (int j = i + 1; j < 26; j++)
		{
			if (abc[i] < abc[j] && q == abc[j])
				t = j;
			else if ((abc[i] == abc[j]) && (q == abc[i]))
			{
				printf("?\n");
				return (0);
			}
		}
	}
	printf("%c\n", t + 'A');
}
