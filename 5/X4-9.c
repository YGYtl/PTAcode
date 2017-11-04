#include<stdio.h>
int main()
{
	int s, i;
	scanf("%d", &s);
	int a, b, c, k, h;
	k = 3;
	a = s;
	h = (s+1)/2;
	for(i=1; i<=h; i++)
	{
		for(b=1; b<s; b++){
			printf(" ");
		}
		for(c=1; c<=(2*i)-1; c++)
		{
			printf("* ");
		}
		printf("\n");
		s = s - 2;
	}
	h = (a+1)/2 - 1;
	for(i=h; i>0; i--)
	{
		for(b=1; b<k; b++)
		{	
			printf(" ");
		}
		for(c=1; c<=(2*i)-1; c++)
		{
			printf("* ");
		}
		if(i == 1)
			return 0;
		else
			printf("\n");
		k = k + 2;
	}
	return 0;
}