// 给定一个整数m（200<m<20000），找出小于m的最大的10个素数。
// 输入格式:
// 	直接输入一个正整数m（200<m<20000）。没有其它任何附加字符。
// 输出格式:
// 	在一行中输出10个满足条件的素数，每个素数输出占6列。没有其它任何附加格式和字符。
// 输入样例:
// 	229
// 输出样例:
//    227   223   211   199   197   193   191   181   179   173

#include<stdio.h>
#include<math.h>
int main()
{
	int sushu[5000] = {0};
	int i, j, k, count, m;
	int n;
	m = 10;
	count = 0;
	scanf("   %d", &n);
	for(i=101; i<n; i+=2)
	{
		k=0;
		for(j=3; j<i; j++)
		{
			if(i%j==0)
			{
				k=1;
			}
		}
		if(k==0)
		{
			sushu[count] = i;
			count++;
		}
	}
	count = count - 1;
	while(m--)
	{
		printf("   %d", sushu[count]);
		count--;
	}
	return 0;
 } 