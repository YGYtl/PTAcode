#include<stdio.h>
int main()
{
	int x;
	int one, two, five, count, k;
	count = 0;
	scanf("%d", &x);
	for(five=x/5; five>0; five--)
	{
		for(two=x-1/2; two>0; two--)
		{
			for(one=x-1; one>0; one--)
			{
				if(one + two*2 + five*5 == x)
				{
					k = one + two + five;
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", five, two, one, k);
					count++;
				}
			}
		}
	}
	printf("count = %d", count);
	return 0;
}
