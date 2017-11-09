#include<stdio.h>
int main()
{
	int hh,mm,ss;
	int n;
	scanf("%d:%d:%d", &hh, &mm, &ss);
	scanf("%d", &n);
	ss = ss + n;
	if(ss >= 60)
	{
		ss = ss - 60;
		mm++;
		if(mm >= 60)
		{
			mm = mm - 60;
			hh++;
			if(hh >= 24)
			{
				hh = hh - 24;
			}
		}
	}
	printf("%02d:%02d:%02d\n",hh,mm,ss);
	return 0;
}