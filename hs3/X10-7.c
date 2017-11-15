void dectobin( int n )
{
	if( n > 1 ) 
		dectobin( n / 2 );
	printf( "%d", n % 2 );
}