#include <stdio.h>
int main()
{
	int n,i,t,sum=0,term=1;
	while(scanf("%d",&n)!=EOF)
	{ 
	    for(i=2 ;i<=n ;i=i+2)
	    {
		    for(t=1 ;t<=i ;t++)	 term = term*t;
		    sum = sum+term;
		    term = 1;
	    }
	    printf("%d\n",sum);
	    sum = 0;
    }
	return 0;
 } 
/*给定一个不小于2、不大于10的偶数n，
计算并输出2!+4!+6!+...+n!。*/
