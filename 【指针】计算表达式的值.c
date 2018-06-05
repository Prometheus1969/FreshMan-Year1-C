#include <stdio.h>
#include <math.h>
int main()
{
	int a,n,i;
	int sum=0,term=0;
	int *p=&sum;
	while(scanf("%d %d",&a,&n)!=EOF)
	{
		for(i=0 ;i<n ;i++)
		{
		    term = term*10+a;
			sum = sum+term;
		}
		printf("%d\n",*p);
		sum = 0;
		term = 0;
	}
	return 0;
 } 
