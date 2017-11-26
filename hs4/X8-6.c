void delchar( char *str, char c ){
	char p[100];
	int j, k, i;
	i = 0,k = 0;
	while(str[i]!=0)
	{
		if(str[i]!=c)
		{
			p[k] = str[i];
			k++;
		}
		str[i] = 0;
		i++;
	}
	p[k] = 0;
	i = 0;
	while(p[i]!=0)
	{
		str[i] = p[i];
		i++;
	}
}