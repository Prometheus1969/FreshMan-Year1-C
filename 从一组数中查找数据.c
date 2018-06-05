#include <stdio.h>
int main()
{
	int T,i,n,x;
	scanf("%d",&T);
	while(T>0)
	{
		int S[10];
		T--;
		scanf("%d",&n);
		for(i=0 ;i<n ;i++)
		{
			scanf("%d",&S[i]);
		}
		scanf("%d",&x);
		for(i=0 ;i<n ;i++)
		{
			if(x==S[i])
			{
				printf("find!\n");
				break;
			}
		}
	    if(i==n)  printf("no find!\n");
	}
	return 0;
 } 
