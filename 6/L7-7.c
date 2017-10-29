#include<stdio.h>
int main()
{
	int s, x, y, sum, k;
	scanf("%d", &s);
	sum = 0;
	for(y=1; y<=s; y++)
	{
		for(x=1; x<=s; x++)
		{
			scanf("%d", &k);
			if(x!=s&&y!=s&&x&&x+y!=s+1)
			{
				sum = sum + k;
			}
		}
	}
	printf("%d", sum);
	return 0;
}