#include<stdio.h>
#include<math.h>
int f(int a, int b);
int main()
{
	int i, b;
	int k;
	int s = 0;
	scanf("%d", &k);
	int a = k;
	switch (a)
		{
			case 3:
				for(k=100; k<999; k++)
				{
					i = k;
					while(i!=0)
					{
						b = i%10;
						s = s + f(b,a);
						i = i/10;
					}
					if(k == s)
					{
						printf("%d\n", s);
						s = 0;
					}
					else{
						s = 0;
					}
				}
				break;
			case 4:
				for(k=1000; k<9999; k++)
				{
					i = k;
					while(i!=0)
					{
						b = i%10;
						s = s + f(b,a);
						i = i/10;
					}
					if(k == s)
					{
						printf("%d\n", s);
						s = 0;
					}
					else{
						s = 0;
					}
				}
				break;
			case 5:
				for(k=10000; k<99999; k++)
				{
					i = k;
					while(i!=0)
					{
						b = i%10;
						s = s + f(b,a);
						i = i/10;
					}
					if(k == s)
					{
						printf("%d\n", s);
						s = 0;
					}
					else{
						s = 0;
					}
				}
				break;
			case 6:
				for(k=100000; k<999999; k++)
				{
					i = k;
					while(i!=0)
					{
						b = i%10;
	                    s = s + f(b,a);
						i = i/10;
					}
					if(k == s)
					{
						printf("%d\n", s);
						s = 0;
					}
					else{
						s = 0;
					}
				}				
				break;
			case 7:
				for(k=1000000; k<9999999; k++)
				{
					i = k;
					while(i!=0)
					{
						b = i%10;
						s = s + f(b,a);
						i = i/10;
					}
					if(k == s)
					{
						printf("%d\n", s);
						s = 0;
					}
					else{
						s = 0;
					}
				}
				break;
		}
	return 0;
}
int f(int b, int a)
{
	int i, k;
	k = 1;
	for(i=1; i<=a; i++)
	{
		k = k*b;
	}
	return k;
}