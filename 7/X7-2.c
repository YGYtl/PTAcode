#include<stdio.h>
int main()
{
	int number, i, k, max, f;
	int count[10] = {0};
	scanf("%d", &number);
	for(i=number; i>0; i--)
	{
		scanf("%d", &f);
		while( f!= 0)
		{
			k = f%10;
			switch (k)
			{
				case 0:
					count[0]++;
					break;
				case 1:
					count[1]++;
					break;
				case 2:
					count[2]++;
					break;
				case 3:
					count[3]++;
					break;
				case 4:
					count[4]++;
					break;
				case 5:
					count[5]++;
					break;
				case 6:
					count[6]++;
					break;
				case 7:
					count[7]++;
					break;
				case 8:
					count[8]++;
					break;
				case 9:
					count[9]++;
					break;
					}
			f = f/10;
		}
	}
	max = count[0];
	for(i=0; i<9; i++)
	{
		if(max<count[i+1])
		{
			max = count[i+1];
		}
	}
	printf("%d:", max);

	for(i=0; i<10; i++)
	{
		if(count[i]==max)
		{
			printf(" %d", i);
		}
	}
	return 0;
}