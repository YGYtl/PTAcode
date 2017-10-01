int CountDigit( int number, int digit )
{
  if(number == 0)
	{
	  return 1;
	}
	int a, b, i=0;
	while(number!=0)
	{
		a = number%10;
		if(a == digit||a == -digit){
			i++;
		}
		number /= 10;
	}
	return i;
}
