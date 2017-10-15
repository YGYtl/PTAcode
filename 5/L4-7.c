# include<stdio.h>
double f(int a);
int main()
{
    int a, i;
	double sum = 1.0;
	scanf("%d", &a);
	
	for(i=1; i<=a; i++)
	{
		sum = sum + 1.0/f(i);
	}
	printf("%.8lf\n", sum);
    return 0;
}
double f(int a)
{
	int i;
	double c = 1.0;
	for(i=1; i<=a; i++)
		{
			c = c*i;
		}
		return c;
}