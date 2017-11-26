#include<stdio.h>
#include <stdlib.h>
int main()
{
	int co, i, n, j, k, v, l, z;
	int *m;
	l = 0;
	z = 0;
	scanf("%d", &co);
	m = (int*)malloc(co*sizeof(int));
	while(co!=0)
	{
	  z = 0;
		scanf("%d", &n);
		for(j=0; j<n; j++)
		{
			for(k=0; k<n; k++)
			{
				scanf("%d", &v);
				if(j>k&&v!=0)
				{
					z = 1;
				}
			}
		}
		m[l] = z;
		l++;
		co--;
	}
	for(i=0; i<l-1; i++)
	{
		if(m[i]==0)
		{
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	if(m[i]==0)
	{
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}