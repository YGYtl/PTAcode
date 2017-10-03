#include <stdio.h>
int main()
{
	int k;
	int i, k1=0, k2=0, k3=0, k4=0, k5=0;
	scanf("%d\n", &k);
	while(k>0){
		scanf("%d", &i);
		if(i >= 90){
			k1++;
     	}else if(i >= 80 && i<90){
     		k2++;
	    }else if(i >= 70 && i<80){
	    	k3++;
	    }else if(i >= 60 && i<70){
	    	k4++;
	    }else {
	    	k5++;
	    }
	    k--;
      }
      printf("%d %d %d %d %d", k1, k2, k3, k4, k5);
	return 0;
}