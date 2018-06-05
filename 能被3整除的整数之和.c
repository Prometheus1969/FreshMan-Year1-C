#include <stdio.h>
int main()
{
	int m,n,i,sum,max,min;
	sum = 0;
	scanf("%d %d",&m,&n);
	max = (m>n)?m:n;
	min = (m<n)?m:n;
	i = min;
	while(i<=max)
	{
		if(i%3==0)
		    sum = sum+i;
	    i++;
	}
	printf("%d",sum);
	return 0;
 } 
