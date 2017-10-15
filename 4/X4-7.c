#include<stdio.h>
int fn(M,N);
int main()
{
	int M, N;
	int f, o1, o2, o3;
	scanf("%d %d", &M, &N);
	f = fn(M,N);
	o1 = M/f;
	o2 = N/f;
	o3 = f*o1*o2;
	printf("%d %d", f, o3);
    return 0;
}
int fn(int M,int N)
{
	int number[] = {0};
	int i, min, c, k;
	c = 0;
	if(M>N)
	{
		min = N;
	}
	else
	{
		min = M;
	}
	for(i=1; i<=min; i++)
	{
		if((M%i==0)&&(N%i==0))
		{
			number[c] = i;
			c++;
		}
	}
	k = number[c-1];
	return k;
}