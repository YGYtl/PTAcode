#include<stdio.h>
int main()
{
	double x1, y1, x2, y2;
	double sum1, sum2;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	sum1 = (x1+x2)*1.00;
	sum2 = (y1+y2)*1.00;
	if(sum1>-0.05&&sum1<0.05)
	{
		sum1 = 0.0;
	}
	if(sum2>-0.05&&sum2<0.05)
	{
		sum2 = 0.0;
	}
	
	printf("(%.1lf, %.1lf)", sum1, sum2);
	return 0;
}