#include<stdio.h>
int main()
{
	char a[100] = {0};
	int s[100] = {0};
	int i, k, sum, se;
	i = 0;
	k = 0;
	se = 0;
	scanf("%d", &s[i]);
	scanf("%c", &a[i]);
	if(a[i]==0)
	{
		
	}
	while( a[i] != '=')
	{
		i++;
		scanf("%d", &s[i]);
		scanf("%c", &a[i]);
	}
	for(k=0; k<i; k++)
	{
		if((a[k]!='-')&&(a[k]!='+')&&(a[k]!='*')&&(a[k]!='/'))
		{
			printf("ERROR");
			return 0;
		}
		else if(a[k] == '-')
		{
			se = s[k] - s[k+1];
			s[k] = 0;
			s[k+1] = se;
		}
		else if(a[k] == '+')
		{
			se = s[k] + s[k+1];
			s[k] = 0;
			s[k+1] = se;
		}
		else if(a[k] == '*')
		{
			se = s[k] * s[k+1];
			s[k] = 0;
			s[k+1] = se;
		}
		else if(a[k] == '/')
		{
			if(s[k+1]==0)
			{
				printf("ERROR");
				return 0;
			}
			else
				se = s[k] / s[k+1];
				s[k] = 0;
				s[k+1] = se;
		}
		sum = se;
	}
	if(a[i]=='=')
	{
		sum = s[i];
	}
	printf("%d", sum);
	return 0;
}