#include<stdio.h>
int main()
{
    int height, n, k;
    double s, s1, s2;
    s1 = 0;
	scanf("%d %d", &height, &n);
	s = height;
	for(k=1; k<=n; k++)
	{
		s1 = s + s1;
		s = s/2;
	}
	if(n > 0)
	{
		s1 = s1*2 - height;
		s2 = s;
	}
	printf("%.1f %.1f\n", s1, s2);
    return 0;
}