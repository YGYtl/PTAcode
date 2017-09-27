#include<stdio.h>

int main()
{
	int i;
	char a = 'A', b = 'B', c = 'C', d = 'D', e = 'E';
	scanf("%d", &i);
	if(i >= 90){
		printf("%c", a);
	}else if(i >= 80 && a<90){
		printf("%c", b);
	}else if(i >= 70 && a<80){
		printf("%c", c);
	}else if(i >= 60 && a<70){
		printf("%c", d);
	}else {
		printf("%c", e);
	}

	return 0;
}