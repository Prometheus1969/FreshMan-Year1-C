#include <stdio.h>
int main()
{
    int S[10];
	int i,j,n;
	while(scanf("%d",&S[0])!=EOF)
	{
	    for(i=1 ;i<10 ;i++)
		    scanf("%d",&S[i]);
		for(i=0 ;i<9 ;i++)
		    for(j=0 ;j<9-i ;j++)
				if(S[j]>S[j+1])
				{
				    n = S[j];
				    S[j] = S[j+1];
				    S[j+1] = n;
				}
		for(i=0 ;i<9 ;i++)
		    printf("%d ",S[i]);
		printf("%d\n",S[9]);	
	}	
	return 0;
} 
