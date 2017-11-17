bool palindrome( char *s )
{
	int m, n, k, j;
	k = 0;
	j = strlen(s);
	n = j-1;
	for(m=0; m<j; m++)
	{
		if(j%2==0)
		{
			if(s[m]==s[n])
			{
				if(m==n+1)
				{
					return true;
				}
				n--;
			}
			else{
				return false;
			}
		}
		else{
			if(s[m]==s[n])
			{
				if(m==n)
				{
					return true;
					break;
				}
				n--;
			}
			else{
				return false;
			}
		}
	}
 }