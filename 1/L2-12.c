#include <stdio.h>
int main()
{
	int lower,upper;
	float fahr, c;
	scanf("%d %d", &lower, &upper);
	if (lower <= upper){
		printf("fahr celsius\n");
		while(lower <= upper){
			fahr = lower;
			c = 5 * (fahr - 32) / 9;
			printf("%.0f%6.1lf\n", fahr, c);
			lower = lower + 2;
		}
	}
	else{
		printf("Invalid.");
	}
	return 0;
}