#include<stdio.h>
int main()
{
	int a, b, c, i, k, sum;
	sum = 0;
	scanf("%d %d", &a, &b);
	for(i=0; i<a; i++)
	{
		for(k=0; k<b; k++)
		{
			scanf("%d", &c);
			sum = sum + c;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}