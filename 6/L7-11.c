#include<stdio.h>
#include <stdlib.h>
void Word(char *start, char *end)
{
	char temp;
	while(start < end)
	{
		temp=*start;
		*start = *end;
		*end = temp;
		*start++;
		*end--;
	}
}
int main()
{
	char a[81];
	gets(a);
	char *q = a;
	while(*q != '\0')
	{
		q++;
	}
	Word(a,q-1);
	printf("%s\n", a);
	return 0;
}