#include <stdio.h>
int main()
{
	int n,i,t;
	double sum,ji;
	scanf("%d",&n);
	ji = 1;
	sum = 0;
	for(t=1;t<=n;t++)
	{
		ji = 1;
		for(i=1;i<=t;i++)
		{
			ji = i*ji;
		}
		sum = sum+ji;
	}
	printf("%.0lf",sum);
	return 0;
 } 
