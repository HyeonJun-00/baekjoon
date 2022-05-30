#include<stdio.h>
#include<stdlib.h>

int     len(char* a)
{
    int     i;

    i = 0;
    while (a[i])
        i++;
    return (i);
}

int     comp(char* w, char* o)
{
    int     i;

    i = 0;
    while (w[i] == o[i] && w[i])
	    i++;
    return (w[i] - o[i]);
}

int     compare_text(char* text1, char* text2)
{
	int	text1len;
	int	text2len;
	int	u;

	text1len = len(text1);
	text2len = len(text2);
	if (text1len < text2len)
		return (-1);
	else if (text1len > text2len)
		return (1);
	else if (text1len == text2len)
	{
		u = comp(text1, text2);
		if (u == 0)
			*text1 = *"\0";
		if (u > 0)
		return (1);
		if (u < 0)
			return (-1);
		return (0);
	}
}

void    swap(char** arr, int x, int y)
{
	char* temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void    asd(char** arr, int size)
{
    int     c;
    int     p;
    int     i;

    for (i = 1; i < size; i++)
    {
        c = i;
        while (c > 0)
        {
            p = (c - 1) / 2;  // 부모노드
            if (compare_text(arr[p], arr[i]) < 1)  // 부 모노드가 작을 경우
            {
                swap(arr, p, i);
                c = p;
            }
            else
                break;  // 자식노드가 작을경우 반복문 빠져나감
        }
    }
    swap(arr, 0, size - 1);
    /* 정렬 */
    for (i = size - 1; i > 1; i--)
    {
        p = 0;  // 부모노드
        while (p < i / 2)  // 부모노드는 자식노드가 있는 것만 확인하면 됨
        {
            c = (p * 2) + 1;  // 자식노드

            if (c + 1 < i && compare_text(arr[c], arr[c + 1]) < 1)
                c++;  // 자식노드 중 더 큰 문자열
            if (compare_text(arr[p], arr[c]) < 0)
                swap(arr, p, c);  // 부모노드 < 자식 노드면 교체

            p = c;
        }
        swap(arr, 0, i - 1);
    }
}


int     main()
{
    char    **word;
    int     wordlen;
    int     i;
    int     j;

    scanf("%d", &wordlen);
    word = (char**)malloc(sizeof(char*) * wordlen + 1);
    i = 0;
    while (i < wordlen)
    {
	    word[i] = (char*)malloc(sizeof(char) * 51);
	    scanf("%s", word[i]);
	    i++;
    }
    asd(word, wordlen);
    printf("\n");
    i = 0;
    while (wordlen > i)
    {
	    if (i + 1== wordlen)
		    printf("%s\n", word[i]);
	    else if (*word[i] != *"\0")
		    printf("%s\n", word[i]);
	    i++;
    }
    free(word);
}
