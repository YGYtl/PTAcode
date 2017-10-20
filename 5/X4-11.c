#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum, cmonth, l, x1, x2;
	sum = 0;
	l = 1;
	x1 = 0;
	x2 = 0;
	cmonth = 2;
	while( sum < n)
	{
		if(n==1)
		{
			cmonth = 1;
			break;
		}
		x1 = l;
		sum = l + x1 + x2;
		l = l + x2;
		x2 = x1;
		cmonth++;
	}
	printf("%d", cmonth);
	return 0;
 } 