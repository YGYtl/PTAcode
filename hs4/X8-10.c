#include<stdio.h>
#include<stdlib.h>

int main()
{
	double average, max, min;
	int r, i;
	double sum;
	scanf("%d", &r);
	double *a = (double*)malloc(r*sizeof(double));
	for(i=0; i<r; i++)
	{
		scanf("%lf", &a[i]);
	}
	max = a[0];
	min = a[0];
	for(i=0; i<r; i++)
	{
		sum = sum + a[i];
		if(a[i]>max)
		{
			max = a[i];
		}
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	average = sum/r*1.0;
	printf("average = %.2f\n", average);
	printf("max = %.2f\n", max);
	printf("min = %.2f", min);
	free(a);
	return 0;
}