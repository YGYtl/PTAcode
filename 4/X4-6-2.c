#include<stdio.h>
#include<math.h>
void fn(int k);
int main()
{
	int k;
	scanf("%d", &k);
	fn(k);
	return 0;
}
void fn(int k)
{
	int i, b, c;
	int s = 0;
	int a = k;
	for(k=pow(10,k-1); k<(pow(10,k)-1); k++)
		{
			i = k;
			while(i!=0)
			{
				b = i%10;
				s = s + pow(b,a);
				i = i/10;
			}
			if(k == s)
			{
				b = printf("%d\n", k);
				s = 0;
			}
			else{
				s = 0;
				}
		}
		return k;
}