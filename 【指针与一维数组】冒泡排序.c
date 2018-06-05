#include <stdio.h>
int main()
{
	int S[20],j,n,i,g;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
		for(i=0 ;i<n-1 ;i++)
		    for(j=0 ;j<n-1-i ;j++)
		    	if(S[j]>S[j+1])
		    	{
		    		g = S[j];
		    		S[j] = S[j+1];
		    		S[j+1] = g;
				}
		for(i=0 ;i<n-1 ;i++)
		    printf("%d ",S[i]);
		printf("%d\n",S[n-1]); 
	}
	return 0;
}
