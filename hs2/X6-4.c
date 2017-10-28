#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}
int fib( int n )
{
	int i, sum, k, b, c;
	int a[150] = {0};
	sum = 0;
	k = 1;
	b = 1;
	for(i=0; i<=150; i++)//得出1500内Fibonacci数的数列a[] 
	{
		if(i==0||i==1)
		{
			a[i] = 1;
		}
		else if(i == 2)
		{
			a[i] = k + b;
		}
		else
		{
			c = k + b;
			k = b;
			sum = b + c;
			a[i] = sum;
			b = c;
		}
	}
	return a[n-1];//(n-1)得出的是13
}

void PrintFN( int m, int n )
{
	int i, k, w, sum;
	int b, c, count;
	w = 1;
	k = 1;
	b = 1;
	count = 0;
	for(i=0; i<=150; i++)
	{
		if(i==0||i==1)
		{
			sum = 1;
		}
		else if(i == 2)
		{
			sum = k + b;
		}
		else
		{
			c = k + b;
			k = b;
			sum = b + c;
			b = c;
		}
		if(sum>=m&&sum<=n)
		{
			if(count==0)
			{
				printf("%d", sum);
			}
			else{
				printf(" %d", sum);
			}
			count++;
			w = 2;
		}
	}
	if(w == 1)
	{
		printf("No Fibonacci number");
	}
}
