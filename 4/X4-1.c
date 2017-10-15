#include <stdio.h>
int main()
{
	int a = 0;
	int sum = 0;
	scanf("%d", &a);
	while(a > 0)
	{
		if(a%2 != 0)
		{
			sum = sum + a;
		}
		scanf("%d", &a);
	}
	if(sum >= 0)
	{
		printf("%d", sum);
	}
	else{
	}
	return 0;
}