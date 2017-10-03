#include <stdio.h>
int main()
{
	int a, b, c, x;
	float d = 0.0;
	scanf("%d %d", &a, &b);
	c = a - b;
	d = c*100.00 / b + 0.5;
	if(d < 10)
	{
		printf("OK");
	}
	else if(d<50){
		x = d;
		printf("Exceed %d%%. Ticket 200", x);
	}
	else
	{
		x = d;
		printf("Exceed %d%%. License Revoked", x);
	}
	return 0;
}