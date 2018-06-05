#include <stdio.h>
int main()
{
	int n,i;
	double H=0,term;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)   break;
		for(i=1 ;i<=n ;i++)
		{
			term = 1.0/i;
			H = H+term;
		}
	    printf("%.3lf\n",H);
	    H = 0;
	}
	return 0;
}
