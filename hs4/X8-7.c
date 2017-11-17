#include<stdio.h>
#include<string.h>
int main()
{
	char s[5][80];
	char max[80];
	int m, n, i;
	
	for(i=0; i<5; i++)
	{
		scanf("%s", s[i]);
	}
	
	for(m=0; m<5; m++)
	{
		for(n=m+1; n<5; n++)
		{
			if(strcmp(s[m],s[n])>0)
			{
				strcpy(max,s[m]);
				strcpy(s[m],s[n]);
				strcpy(s[n],max);
			}
		}
	}
	
	printf("After sorted:\n");
	for(i=0; i<5; i++)
	{
		printf("%s\n", s[i]);
	}
	return 0;
}