#include<stdio.h>
int main()
{
	char a[80];
	int i, count;
	i = 0;
	count = 0;
	a[i] = getchar();
	while(a[i] != '\n')
	{
		if(a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'&&(a[i]>'A'&&a[i]<='Z'))
		{
			count++;
		}
		i++;
		a[i] = getchar();
	}
	printf("%d", count);
	return 0;
}
