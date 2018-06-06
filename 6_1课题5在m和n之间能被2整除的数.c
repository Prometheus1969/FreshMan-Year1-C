#include <stdio.h>
int main()
{
	int m,n,i,max,min;
	scanf("%d %d",&m,&n);
	max = (m>n)?m:n;                        //分出最大最小值 
	min = (m<n)?m:n;
	i = min;                                //i从最小值开始 
	while(i<=max)
    {
    	if(i%2 == 0)
    	    printf("%d ",i);
    	    i++;
	}
	return 0;
}
