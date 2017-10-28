#include<stdio.h>
int main()
{
	int a[21];
	int b[21];
	int c[21];
	int s1, s2, count, i, k, g, p, x;
	count = 0;
	scanf("%d", &s1);
	for(i=0; i<s1; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &s2);
	for(i=0; i<s2; i++)
	{
		scanf("%d", &b[i]);
	}

	for(i=0; i<s1; i++)
	{
		for(k=0; k<s2; k++)
		{
			if(a[i] == b[k])
			{
				break;
			}
		}
		if(k == s2)
		{
			c[count] = a[i];
			count++;
		}
	}

	for(i=0; i<s2; i++)
	{
		for(k=0; k<s1; k++)
		{
			if(b[i] == a[k])
			{
				break;
			}
		}
		if(k == s1)
		{
			c[count] = b[i];
			count++;
		}
	}
	printf("%d",c[0]);
	for(i=1; i<count; i++)
	{
		for(k=0; k<i; k++)
		{
			if(c[i]==c[k])
				break;
 		}
		if(k >= i)
			printf(" %d",c[i]);
	}
	printf("\n");
	return 0;
}