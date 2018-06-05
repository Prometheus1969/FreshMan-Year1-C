#include <stdio.h>
int main()
{
	int S[20];
	int n,i,t;
	scanf("%d",&n);
	while(n!=0)
	{
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
        for(i=0 ;i<n/2 ;i++)
        {
        	t = S[i];
        	S[i] = S[n-1-i];
        	S[n-1-i] = t;
		}
		for(i=0 ;i<n ;i++)
		    printf("%d ",S[i]);
		printf("\n");
	scanf("%d",&n);
	}
	return 0;
}
