#include <stdio.h>
int main()
{
	int i,n,sum;
	scanf("%d",&n);
	i = 1;
	sum = 0;
	while(i<=n)
	{
		sum = sum+i;
		i = i+2;
	}
	printf("%d",sum);
	return 0;
 } 
