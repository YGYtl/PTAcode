void pyramid( int n )
{
	int i, k, s;
	for(i=1; i<=n; i++){
		k = n - i;
		while(k!=0){
			printf(" ");
			k = k - 1;
		}
		s = i;
		while(s!=0){
			printf("%d ", i);
			s = s - 1;
		}
		printf("\n");
	}
}
