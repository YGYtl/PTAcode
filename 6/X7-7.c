#include<stdio.h>
int main()
{
	char a[80];
	int i, k, j;
	i = 0;
	a[i] = getchar();
	while(a[i] != '\n')
	{
		i++;
		a[i] = getchar();
	}
	a[i] = '\0';
	for(k=0; k<i; k++)
	{
		if(a[k]>='A'&&a[k]<='Z')
		{
			j = a[k];
			a[k] = 155 - j;
		}
	}
	printf("%s", a);
	return 0;
}