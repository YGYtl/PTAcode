#include <stdio.h>
struct ts{
	char name[10][11];
	long long sr[10];
	char dhm[10][18];
};

int main()
{
	struct ts a;
	int n, k, o;
	long long m[10] = {0};
	scanf("%d", &n);
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%s", &a.name[i]);
		scanf("%lld", &a.sr[i]);
		scanf("%s", &a.dhm[i]);
	}
	
	for(i=0; i<n; i++)
	{
		m[i] = a.sr[i];
	}
	
	for(i=1; i<n; i++)
	{
		for(k=0; k<n-i; k++)
		{
			if(m[k]>m[k+1])
			{
				o = m[k];
				m[k] = m[k+1];
				m[k+1] = o;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		for(k=0; k<n; k++)
		{
			if(m[i]==a.sr[k])
			{
				printf("%s %lld %s\n", a.name[k], a.sr[k], a.dhm[k]);
			}
		}
	}
	return 0;
}