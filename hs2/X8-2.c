int search( int list[], int n, int x )
{
	int i, k;
	k = 0;
	for(i=0; i<n; i++)
	{
		if(list[i]==x)
		{
			k = 1;
			break;
		}
	}
	if(k==1)
	{
		return i;
	}
	else
	{
		return -1;
	}
}