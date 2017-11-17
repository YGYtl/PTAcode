int getindex(char*s)
{ 
	char week[7][MAXS]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"}; 
	int i; 
	for(i=0;i<7;i++)
	{	 
		if(strcmp(week[i],s)==0) 
			return i; 
	} 
	if(i==7)
		return -1;
}
