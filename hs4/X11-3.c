int max_len( char *s[], int n )
{
	int i, max;
	max = strlen(s[0]);
	for(i=1; i<n; i++)
	{
		if(strlen(s[i])>max)
		{
			max = strlen(s[i]);
		}
	}
	return max;
}