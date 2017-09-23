#include<stdio.h>
int main(void)
{
	int a,sum=0, i, k=1;
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		k = k*i;
		sum = sum + k;
	}
	printf("%d", sum);
	return 0;
}
