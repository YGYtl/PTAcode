int CountDigit( int number, int digit )
{
	int i = 0, a = 1, c = 0;
	c = number;
    if( number != 0 ) 
	{
		while(c != 0){
    	c /= 10;
    	a++;
	}
	    while (number != 0){
		
		    if(number% (a * 10) == digit){
			    i++;
		}
		number /= 10;
	}
	}
	else if(a = 0){
	}
	return i;
}