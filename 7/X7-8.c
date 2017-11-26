#include <stdio.h>

int main()
{
    int i, j, m, n, o;
    int a[6][6], b[6][6];
    scanf("%d %d", &m, &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
        	scanf("%d", &a[i][j]);
		    }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            o = (j+m)%n;
            b[i][o] = a[i][j];
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
        {
          printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}