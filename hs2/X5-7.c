double funcos( double e, double x )
{
	double sum;
	int k, a, count;
	double b, c, count1, co;
	c = 1;
	sum = 0;
	a = 1;
	count = 0;
	count1 = pow(x,2);
	b = pow(x,count);
	co = 1;
	for(k=1; k<=count; k++)
		{   
			co = co*k;
		}
	while(fabs(c) >= e)
	{
		c = b*a/co;
		sum = sum + c;
		a = -a;
		count = count + 2;
		co = co*count*(count-1);
		b = b * count1;
	}
	return sum;
}