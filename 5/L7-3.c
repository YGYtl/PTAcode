#include<stdio.h>
int main()
{
	int s, i, k;
	k = 0;
	scanf("%d", &s);
	int a[11] = {0};
	for(i=1; i<=s; i++)
	{
		scanf("%d", &k);
		a[i] = k;
	}
	i = i-1;
	while(i != 1)
	{
		printf("%d", a[i]);
		printf(" ");
		i--;
	}
	printf("%d", a[i]);
	return 0;
}