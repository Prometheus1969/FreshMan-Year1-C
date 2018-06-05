#include <stdio.h>
int main()
{
	int n,i,max=0,s;
	int S[20];
	int *p=&s,*z=&max;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)  break;
		for(i=0 ;i<n ;i++)	
		{
		    scanf("%d",&S[i]);
		    if(S[i]>max)  
			{
                max = S[i];
                s = i;
            }
	    }
	    printf("%d %d\n",*z,*p);
	    max = 0;
	}
	return 0;
 } 
