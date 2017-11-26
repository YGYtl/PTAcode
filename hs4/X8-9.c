void StringCount( char *s )
{
	int d, x, k, s1, q;
	d = 0, x = 0, k = 0, s1 = 0, q = 0;
	int i;
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			d++;
		}
		else if(s[i]>='a'&&s[i]<='z')
		{
			x++;
		}
		else if(s[i]==' ')
		{
			k++;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			s1++;
		}
		else{
			q++;
		}
	}
	printf("%d %d %d %d %d", d, x, k, s1, q);
}