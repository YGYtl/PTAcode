#include<stdio.h>

int main(void)
{
	int one, i, k, j;
	scanf("%d", &one);
	int a[10] = {0};
	for(i=0; i<one; i++)
	{
		scanf("%d", &a[i]);
	}
	for(j=1; j<one; j++)
	{
		for(i=0; i<one-j; i++)
		{
			if(a[i]<a[i+1])
			{
				k = a[i+1];
				a[i+1] = a[i];
				a[i] = k;
			}
		}
	}
	for(i=0; i<one-1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d", a[i]);
	return 0;
}