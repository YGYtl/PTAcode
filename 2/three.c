#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n > 0){
		printf("sign(%d) = %d", n, 1);
	}
	else if(n == 0){
		printf("sign(%d) = %d", n, 0);
	}
	else{
		printf("sign(%d) = %d", n, -1);
	}
	return 0;
}