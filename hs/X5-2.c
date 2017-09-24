int even( int n )
{
	int i, k;
	for(i=1; i<=n; i++){
		if (i%2==0){
			k = 1;
		}else{
			k = 0;
		}
	}
	return k;
}
int OddSum( int List[], int N )
{
	int sum;
	int i;
	for(i=0; i<N; i++){
		if(list[i]%2 != 0){
			sum += list[i];
		}else{
		}
	}
	return sum;
}