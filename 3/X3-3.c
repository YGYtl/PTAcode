#include <stdio.h>
int main()
{
	int d = 0;
	double x = 0.0, i=3.0, j;
	int sum;
	scanf("%lf %d", &x, &d);
	int q = 10, k = 0;
	if(x<=i)
	{
		if(d<5){
			sum = (int)q;
		}
		else{
			k = d / 5;
			sum = (int)(q + k*2);
		}
	}
	else if(x>i&&x<=10)
	{
		if(d<5)
		{
			sum =(int)(q + (x-i)*2 + 0.5);
     	}
		else{
			k = d / 5;
			sum = (int)(q + k*2 + (x-i)*2 + 0.5);
		    }
	    }
	else
	{
		if(d<5)
		{
			j = x - q;
			sum = (int)(j*3 + 7*2 + q + 0.5);
		}
		else{
			j = x - q;
			k = d / 5;
			sum = (int)(j*3 + 7*2 + k*2 + q + 0.5);
		}
	}
	printf("%d", sum);
	return 0;
}
