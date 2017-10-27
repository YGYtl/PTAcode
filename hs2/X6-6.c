int reverse( int number )
{
	int k, i, count, count1;
	int sum;
	count1 = 10;
	if(number<0)
	{
		number = -number;
		while(number%10 == 0)
		{
			number = number/10;
		}
		k = number;
		count = -1;
		while(k!=0)
		{
			k = k/10;
			count++;
		}
		sum = 0;
		while(count!=1)
		{
			count1 = count1*10;
			count--;
		}
		while(number!=0)
		{
			k = number%10;
			sum = sum + k*count1;
			count1 = count1/10;
			number = number/10;
		}
		sum = -sum;
	}
	else if(number>0){
		while(number%10 == 0)
		{
			number = number/10;
		}
		k = number;
		count = -1;
		while(k!=0)
		{
			k = k/10;
			count++;
		}
		sum = 0;
		while(count!=1)
		{
			count1 = count1*10;
			count--;
		}
		while(number!=0)
		{
			k = number%10;
			sum = sum + k*count1;
			count1 = count1/10;
			number = number/10;
		}
	}
	else{
		sum = 0;
	}
	return sum;
}
