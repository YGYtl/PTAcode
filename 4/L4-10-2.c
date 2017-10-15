#include <stdio.h>
void min(int f[], int count);
int main()
{
	int n, i, a, count;
	count = 0;
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
	int i, k;
	k = f[0];
	for(i=1; i<count; i++)
	{
		if(k>f[i])
		{
			k = f[i];
		}
	}
	printf("min = %d", k);
}