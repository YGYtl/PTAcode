#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}
int fn( int a, int n )
{
	int i = 0, k, sum = 0;
	while(n != 0)
	{
		sum = sum + a;
		a = a*10;
		n--;
	}
	return sum;
	
}
int SumA( int a, int n )
{
	int k = fn(a,n);
	int S = 0; 
	while(k != 0)
	{
		S = S + k;
		k = k/10;
	}
	return S;
}