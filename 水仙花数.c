#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,i,a,b,c,count=0;
	scanf("%d %d",&m,&n);
	for(i=m ;i<=n ;i++)
	{
		a = i/100;
	    b = (i%100)/10;
	    c = (i%100)%10;
		if(i==pow(a,3)+pow(b,3)+pow(c,3))
		{
	        printf("%d\n",i);
		    count++;
	    }
	}
	if(count==0)
	    printf("No");
	return 0;
 } 
