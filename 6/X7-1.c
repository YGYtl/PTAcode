#include<stdio.h>

int main(void)
{
	int one, i, k, j;
	scanf("%d", &one);
	int a[11];
	for(i=0; i<one; i++)
	{
		scanf("%d", &a[i]);
	}
	for(j=0; j<one; j++)
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
	if(one==10)
	{
		for(i=1; i<one; i++)
		{
			printf("%d ", a[i]);
		}
	}
	else
	{
		for(i=0; i<one-1; i++)
		{
			printf("%d ", a[i]);
		}
	}
	printf("%d", a[i]);
	return 0;
}