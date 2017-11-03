#include<stdio.h>
int main()
{
	char a[81];
	char c;
	int ix, i, idx, k;
	ix = 0;
	k = 0;
	idx = 1;
	char sign;
	scanf("%c", &sign);
	getchar();
	c = getchar();
	a[ix] = c;
	c = getchar();
	while(c != '\n')
	{
		ix++;
		a[ix] = c;
		c = getchar();
	}
	for(i=ix; i>=0; i--)
	{
		if(a[i]==sign)
		{
			k = 1;
			idx = i;
			break;
		}
	}
	if(k==0)
	{
		printf("Not Found");
	}
	else{
		printf("index = %d", idx);
	}
	return 0;
}