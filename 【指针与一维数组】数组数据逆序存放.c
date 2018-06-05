#include <stdio.h>
int main()
{
	int S[20];
	int n,i,*p1,*p2,x;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)  break;
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
		p1 = &S[0];
		p2 = &S[n-1];
		for(i=0 ;i<n/2 ;i++)
		{
            x = *p1;
			*p1 = *p2;
			*p2 = x;  
		    p1++;
		    p2--;
	    }
	    for(i=0 ;i<n-1 ;i++)
	        printf("%d ",S[i]);
	    printf("%d",S[n-1]);
	    printf("\n");
	}
	return 0;
}
