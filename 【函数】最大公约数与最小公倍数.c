#include <stdio.h>
int yueshu(int m,int n)
{
	int gy=1,i,max;
	max = (m>n)?m:n;
	for(i=2;i<=max;i++)                        
	{
		if(m%i==0&&n%i==0)
		    gy = i;
	}	
    printf("%d ",gy); 
    return gy;                               
}
int main()
{
	int m,n,gy,gb;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
	    gy = yueshu(m,n);
	    gb = (m*n)/gy;   
		printf("%d\n",gb);	
	}
	return 0;
}
