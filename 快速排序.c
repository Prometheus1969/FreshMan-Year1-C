#include <stdio.h>
int main()
{
	int T,n,i,j;
	int a;
	int S[100];
	scanf("%d",&T);
	while(T>0)
	{
		scanf("%d",&n);
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
		for(i=0 ;i<n-1 ;i++)
		    for(j=0 ;j<n-1-i ;j++)
		        if(S[j]>S[j+1])
		        {
		        	a = S[j];
		        	S[j] = S[j+1];
		        	S[j+1] = a;
				}
		for(i=0 ;i<n ;i++)
		    printf("%d ",S[i]);
		printf("\n");
	    T--;
	}
 } 
