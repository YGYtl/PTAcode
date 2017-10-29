#include<stdio.h>
int main()
{
	int yyyy,mm,dd;
	int k, i, s, day;
	day = 0;
	scanf("%d/%d/%d", &yyyy, &mm, &dd);
	if(yyyy%4==0&&yyyy%100!=0||yyyy%400==0)
	{
		k = 2;
	}
	else{
		k = 0;
	}
	for(i=1; i<mm; i++)
	{
		switch (i){
			case 1:
				s = 31;
				break;
			case 2:
				if(k == 2)
				{
					s = 29;
				}
				else{
					s = 28;
				}
				break;
			case 3:
				s = 31;
				break;
			case 4:
				s = 30;
				break;
			case 5:
				s = 31;
				break;
			case 6:
				s = 30;
				break;
			case 7:
				s = 31;
				break;
			case 8:
				s = 31;
				break;
			case 9:
				s = 30;
				break;
			case 10:
				s = 31;
				break;
			case 11:
				s = 30;
				break;
			case 12:
				s = 31;
				break;
		}
		day = day + s;
	}
	day = day + dd;
	printf("%d" , day);
	return 0;
}