#include <stdio.h>
int main()
{
	int S[100];
	int i,j,t,count=0;
	int T,n;
	scanf("%d",&T);
	while(T>0)
	{ 
	    scanf("%d",&n);
	    for(i=0 ;i<n ;i++)  scanf("%d",&S[i]);
	    for(i=0 ;i<n ;i++)
	        for(j=0 ;j<n-1 ;j++)
	        {
	        	if(S[j]>S[j+1])
	        	{
	        		t = S[j];
	        		S[j] = S[j+1];
	        		S[j+1] = t;
	        		count++;
	    		}
    		}
	    printf("%d\n",count);
	    count = 0;
	    T--;
    }
	return 0;
}
