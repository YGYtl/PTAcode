#include <stdio.h>
int main()
{
	int M, N;
	scanf("%d %d", &M, &N);
	int i, k, sum = 0;
	int count = 0;
	int a;
	for(i=M; i<=N; i++)
	{
		if(i >= 2)
		{
			a = sqrt(i);	
			for(k=2; k<=a; k++)
			{
				if(i%k == 0)
				{
					break;
				}
			}
			if(k > a)
			{
				count++;
				sum = sum + i;
			}
		}
	}
	printf("%d %d", count, sum);
	return 0;
 } 