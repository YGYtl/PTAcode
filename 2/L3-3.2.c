#include<stdio.h>
int main()
{
	int a, i, d=0;
	int count = 0;
	float average = 0.0, sum = 0.0;
	scanf("%d", &a);
	int list[a];
	count = 0;
    if(a == 0){
    	average = 0.0;
    	count = 0;
	}
	else{
		for(i=0; i<a; i++){
		list[i]=0;
	}
	
	    for(i=0; i<a; i++){
		    scanf("%d", &list[i]);
	}
	
	    for(i=0; i<a; i++){
		    sum += list[i];
		    if(list[i]>=60){
			    d++;
		}
	}
	average = sum/a;
	} 
	
	printf("average = %.1f\n", average);
	printf("count = %d\n", d);
	return 0;
}