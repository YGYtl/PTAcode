char *search(char *s, char *t)
{
	int i, j, k, n, count;
	char *p = NULL;
	i = 0;
	k = 2;
	count++;
	while(t[count]!='\0')
	{
		count++;
	}
	for(i=0; i<MAXS; i++)
	{
		j = 0;
		if(t[j]==s[i])
		{
			k = 0;
			n = i;
			for(j=0; j<count; j++)
			{
				if(t[j]!=s[i+j])
				{
					k=1;
				}
			}
		}
		if(k==0)
		{
			p = &s[n];
			break;
		}
	}
	return p;
}