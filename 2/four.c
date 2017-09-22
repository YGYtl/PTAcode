#include<stdio.h>
#include<math.h>
int main()
{
	int i, k, n;
	scanf("%d", &n);
	for (i=0; i<=n; i++){
	    k = pow(3,i);
		printf("pow(3,%d) = %d\n", i, k);
	}
	return 0;
}