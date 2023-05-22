#include <stdio.h>
#include <string.h>

int	a = 0;

void	conut()
{
	a++;
}

int recursion(const char *s, int l, int r)
{

	conut();
	if(l >= r)
		return 1;
	else if(s[l] != s[r]) 
		return 0;
	else 
		return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s)
{
	return recursion(s, 0, strlen(s) - 1);
}

int main()
{
	int	t;
	char	word[1001];

	scanf("%d", &t);

	while (t--)
	{
		scanf("%s", word);
		printf("%d ", isPalindrome(word));
		printf("%d\n", a);
		a = 0;
	}
}
