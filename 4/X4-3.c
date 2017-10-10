#include<stdio.h>
int main()
{
	int i = 1, s;
	double z = 2.0, m = 1.0;
	double k = 0.0;
	double sum = 0.0;
	scanf("%d", &s);
	while(i <= s)
	{
		k = z / m;
		z = z + m;
		m = z - m;
		sum = sum + k;
		i++;
	}
	printf("%.2f", sum);
	return 0;
}
