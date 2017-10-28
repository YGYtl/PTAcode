#include<stdio.h>
int main()
{
	int number, max;
	scanf("%d", &number);
	int i, s[11] = {0};
	scanf("%d", &s[0]);
	max = s[0];
	for (i=1; i<=number-1; i++)
	{
		scanf("%d", &s[i]);
		if(s[i]>s[0])
		{
			max = s[i];
		}
	}
	i = 0;
	while(s[i] != max)
	{
		i++;
	}
	printf("%d %d", max, i);
	return 0;
}