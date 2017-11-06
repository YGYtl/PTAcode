#include<stdio.h>
int main()
{
	int a, i, j, max, n, m, k, q;
	max = 0;
	k = 0;
	scanf("%d", &a);
	int s[6][6] = {0};
	for(j=0; j<a; j++)
	{
		for(i=0; i<a; i++)
		{
			scanf("%d", &s[j][i]);
		}
	}
	for(j=0; j<a; j++)
	{
		for(i=0; i<a; i++)
		{
			if(max<=s[j][i])
			{
				max = s[j][i];//j=0,i=1
				m = max;
				q = i;
				for(n=0; n<a; n++)
				{
					if(m>s[n][q]){
						m = s[n][q];
					}
				}
			}
		}
		if(max==m)
		{
			printf("%d %d", j, q);
			k = 1;
			break;
		}
		max = 0;
	}
	if(k!=1)
	{
		printf("NONE");
	}
	return 0;
}