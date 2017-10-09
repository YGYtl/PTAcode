void StringCount( char s[] )
{
	char c;
	int i = 0;
	int letter = 0, blank = 0;
	int digit = 0, other = 0;
	while(s[i] != 0)
	{    
	    c = s[i];
	    i++;
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			letter ++;
		}
		else if((c == ' ')||(c == '\n')){
			blank ++;
		}
		else if(c>='0'&&c<='9')
		{
			digit ++;
		}
		else{
			other ++;
		}
	}
	c = s[i];
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank,
	digit, other);
}