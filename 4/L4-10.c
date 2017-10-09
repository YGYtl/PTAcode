#include <stdio.h>
void min(int f[],int count);
int main()
{
	int c = 0;
	int n, i;
	int a, count = 0;
	scanf("%d", &n);
	int f[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &a);
		f[i] = a;
		count++;
	}
	min(f, count);
	return 0;
}

void min(int f[], int count)
{
	int i, j, k;
	int g = count;
	for(j=0; j<count; j++)
	{
		for(i=0; i<count-j; i++)
		{
			if(f[i]>f[i+1])
			{
				k = f[i];
				f[i] = f[i+1];
				f[i+1] = k;
			}
		}
	}
	printf("min = %d", f[0]);
}