#include <stdio.h>
int main()
{
	int d = 0, j;
	int x;
	int sum;
	scanf("%d %d", &x, &d);
	int i = 3,q = 10, k = 0;
	if(x<=i)
	{
		if(d<5){
			sum = q;
		}
		else{
			k = d /5;
			sum = q + k*2;
		}
	}
	else if(x>i&&x<=10)
	{
		if(d<5)
		{
			sum = q + (x-i)*2;
		}
		else{
			k = d / 5;
			sum = q + k*2 + (x-i)*2;
		}
	}
	else
	{
		if(d<5)
		{
			j = x - q;
			sum = j*3 + (x-i)*2 + q;
		}
		else{
			j = x - 10;
			k = d / 5;
			sum = j*3 + (x-i)*2 + k*2 + q;
		}
	}
	printf("%d", sum);
	return 0;
}