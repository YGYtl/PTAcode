#include<stdio.h>
int main()
{
	int a;
	double cost;
	scanf("%d", &a);
	if(a < 0){
        printf("Invalid Value!") ;   		
	}
	else{
	  if ((a <= 50) && (a >= 0)){
		    cost = a*0.53;
	}else{
		    cost = (50*0.53) + (a - 50)*0.58;
	}
	printf("cost = %.2f", cost);}
	return 0;
 } 