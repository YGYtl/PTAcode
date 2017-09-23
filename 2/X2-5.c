#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, i;
	float sum = 0.0, s;
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		s = sqrt(i);
		sum += s;
	}
	printf("sum = %.2f", sum);
	return 0;
}