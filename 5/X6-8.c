#include <stdio.h>
int main()
{
	char z, a;
	int sum;
	sum = 0;
	a = ' ';
	while( (z=getchar() )!= '\n')
	{
		if((z != ' ')&&(a == ' '))
		{
			sum++;
		}
		a = z;
		
	}
	printf("%d", sum);
	return 0;
}