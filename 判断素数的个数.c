#include <stdio.h>
int main()
{
	int n,m,g;
	scanf("%d",&n);
	g = 0;
	for(n=n;n>=1;n--)
	{
		for(m=2;m<n;m++)
	    {
		    if(n%m==0)
		        break;
	    }
	    if(m==n)
	        g = g+1;
	}
	printf("%d",g);
	return 0;
}
	        
