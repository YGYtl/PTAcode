#include<stdio.h>
#include<math.h>
int main()
{
	int i, n, j, count, k;
	long long sum, m;
	count = 0;
	k = 1;
	j = 0;
	i = 0;
	sum = 0;
	char c, s[100] = {'\0'}, cn[100] = {'\0'};
	scanf("%c", &s[0]);
	if(s[0]=='0'||s[0]=='1'||s[0]=='2'||s[0]=='3'||s[0]=='4'||s[0]=='5'||s[0]=='6'||s[0]=='7'||s[0]=='8'||s[0]=='9'||(s[0]>='a'&&s[0]<='f')||(s[0]>='A'&&s[0]<='F'))
	{
		cn[count] = s[0];
		count = 1;
	}
	while(s[i]!='#')
	{
		if(s[i]=='-'&&count==0)
		{
			k = -1;
		}
  		i++;
		scanf("%c", &s[i]);
		if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||(s[i]>='a'&&s[i]<='f')||(s[i]>='A'&&s[i]<='F'))
		{
			cn[count] = s[i];
			count++;
		}
	}
	for(n=count-1; n>=0; n--)
	{
		if(cn[n]=='0') m = 0;
		if(cn[n]=='1') m = 1*pow(16,j);
		if(cn[n]=='2') m = 2*pow(16,j);
		if(cn[n]=='3') m = 3*pow(16,j);
		if(cn[n]=='4') m = 4*pow(16,j);
		if(cn[n]=='5') m = 5*pow(16,j);
		if(cn[n]=='6') m = 6*pow(16,j);
		if(cn[n]=='7') m = 7*pow(16,j);
		if(cn[n]=='8') m = 8*pow(16,j);
		if(cn[n]=='9') m = 9*pow(16,j);
		if(cn[n]=='a'||cn[n]=='A') m = 10*pow(16,j);
		if(cn[n]=='b'||cn[n]=='B') m = 11*pow(16,j);
		if(cn[n]=='c'||cn[n]=='C') m = 12*pow(16,j);
		if(cn[n]=='d'||cn[n]=='D') m = 13*pow(16,j);
		if(cn[n]=='e'||cn[n]=='E') m = 14*pow(16,j);
		if(cn[n]=='f'||cn[n]=='F') m = 15*pow(16,j);
		j++;
		sum = sum + m;
	}
	printf("%lld", sum*k);
	return 0;
}