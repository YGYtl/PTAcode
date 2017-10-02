#include <stdio.h>
int main()
{
	float price = 0.0;
	int a, b = 0;
	const int i = 1;
	    printf("[1] apple\n");
        printf("[2] pear\n");
        printf("[3] orange\n");
        printf("[4] grape\n");
        printf("[0] exit\n");
        while(b < 5){
        scanf("%d", &a);
		if (a == 1)
		{
			price = i * 3.00;
			printf("price = %.2f\n", price);
		}
		else if(a == 2)
		{
			price = i * 2.50;
			printf("price = %.2f\n", price);
		}
		else if(a == 3)
		{
			price = i * 4.1;
			printf("price = %.2f\n", price);
		}
		else if(a == 4)
		{
			price = i * 10.20;
			printf("price = %.2f\n", price);
		}
		else if(a == 0){
			break;
		}
		else{
			printf("price = 0.00");
			break;
		}
		b ++;
	 }
	 return 0;
}