#include<stdio.h>
struct books{
	char bname[10][80];
	double price[10];
};

int main()
{
	struct books b;
	int n, i, k, j, a, c;
	k = 0;
	j = 0;
	double max, min;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		getchar();
		gets(b.bname[i]);
		scanf("%lf", &b.price[i]);
	}
	max = b.price[0];
	min = b.price[0];
	
	for(i=0; i<n; i++)
	{
		if(max<b.price[i])
		{
			max = b.price[i];
		}
		if(min>b.price[i])
		{
			min = b.price[i];
		}
	}
	for(i=0; i<n; i++)
	{
		if(max==b.price[i])
		{
			k = i;
		}
		if(min==b.price[i])
		{
			j = i;
		}
	}
	printf("%.2f, %s\n", max, b.bname[k]);
	printf("%.2f, %s", min, b.bname[j]);
	return 0;
}