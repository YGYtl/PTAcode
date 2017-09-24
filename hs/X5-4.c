int prime( int p )
{
	int i,n;
	if(p >= 2){
		n = sqrt(p);
		for (i = 2;i <= n;i++){
			if(p % i == 0){
			break;
			}
		}
		if (i > n){
		    return 1;
			}
		else{
		    return 0;
			}
	}
	else{
	return 0;}
}


int PrimeSum( int m, int n )
{
	int a, c = 0;
	for(a = m; a <= n; a++){
	    if(prime(a) == 1)
	    c = c + a;
		}
	return c;
}