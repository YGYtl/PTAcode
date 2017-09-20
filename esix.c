#include <stdio.h>
int main ()
{
   int A,B;
   scanf("%d %d", &A, &B);
   printf("%d + %d = %d\n", A, B, A + B);
   printf("%d - %d = %d\n", A, B, A - B);
   printf("%d * %d = %d\n", A, B, A * B);
   while(B != 0){
	        printf("%d / %d = %d", A, B, A / B); 
	        break;
	}
	return 0;
}