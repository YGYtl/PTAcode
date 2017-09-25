int even( int n )
{
	int k;
	if (n%2==0){
		k = 1;
	}else{
		k = 0;
		} 
	return k;
}

int OddSum( int List[], int N )
{
	int sum=0;
	int i;
	for(i=0; i<N; i++){
		if(List[i]%2 != 0){
			sum += List[i];
		}
	}
	return sum;
}