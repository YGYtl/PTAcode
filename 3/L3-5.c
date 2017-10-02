#include <stdio.h>
int main()
{
	int a, i, k=0;
	scanf("%d", &a);
	if (a>2100||a<=2000)
	{
		printf("Invalid year!");
	}
	if(a>2000&&a<=2100){
		for(i=2001; i<= a; i++)
	    {
		    if((i%4 == 0)&&(i%100!=0)||(i%400==0))
		    {
			    printf("%d\n", i);
			    k++;
		    }
	    }
	    if(k==0){
    	printf("None");
	}
		}
	
	return 0;
}