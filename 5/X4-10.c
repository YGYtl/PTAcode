#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int  sum;
	int i, s, c;
	s = 0;
	c = pow(2,n-1);
	for(i=1; i<n-1; i++)
	{
		s = s + pow(2,i);
	}
	sum = 2*pow(2,n-1) + s;
	printf("%d", sum);
	return 0;
 } 