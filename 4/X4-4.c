#include<stdio.h>
#include<math.h>
int main()
{
	int a, n;
	int sum=0;
	scanf("%d %d", &a, &n);
	int s = a, count;
	for(count=1; count<n; count++)
	{
		s = s + a*pow(10,count);
	}
	while(s != 0)
	{
		sum = sum + s;
		s = s / 10;
	}
	printf("S = %d", sum);
	return 0;
}