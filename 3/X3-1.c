#include <stdio.h>
int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d %d", &a, &b, &c);
	if(a == b&&a == c)
	{
	  d = a;
	  e = b;
	  f = c;
	}
	else if(a>b&&a>c)
	{
		f = a;
		if(b>c)
		{
			e = b;
			d = c;
		}
		else{
			e = c;
			d = b;
		}
	}
	else if(b>a&&b>c)
	{
		f = b;
		if(a>c)
		{
			e = a;
			d = c;
		}
		else{
			e = c;
			d = a;
		}
	}
	else
	{
		f = c;
		if(a>b)
		{
			e = a;
			d = b;
		}
		else
		{
			e = b;
			d = a;
		}
	}
	printf("%d->%d->%d", d, e, f);
	return 0;
}