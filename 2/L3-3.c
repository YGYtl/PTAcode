#include <stdio.h>
int main(void)
{
    int count, i, n;
    double average, a, b;
    scanf("%d", &n);
    b = 0;
    count = 0;
    if(n == 0){
    	average = 0.0;
    	count = 0;
	}
	else{
		for(i=1; i<=n; i++){
            scanf("%lf", &a);
            b = b + a;
        if(a >= 60){
            count++;
            }
        }
    average = 1.0 * b/n;
	}
    printf("average = %.1f\n", average);
    printf("count = %d\n", count);
}