void strmcpy( char *t, int m, char *s ){  
    int i, j, l;
    j = 0;
    l = strlen(t);
    if(m>l)
    {
      *(s+j) = '\0';
    }
    for(i=m-1; i<l; i++)
    {
      *(s+j) = *(t+i);
      j++;
    }
    s[j] = '\0';
}