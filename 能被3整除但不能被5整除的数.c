#include <stdio.h>
int main()
{
	int m,n,i,x,y;
	scanf("%d %d",&m,&n);
	i = m;
	while(i<=n)
	{
        x = i%3;
        y = i%5;
		if(x==0&&y!=0)
		    printf("%d ",i);
		i++;
	}
	return 0;
 } 
