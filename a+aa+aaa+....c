#include <stdio.h>
int main()
{
	int n,a,i,t;
    double sum=0,term=0;
	scanf("%d %d",&a,&n);
	for(i=1 ;i<=n ;i++)
	{
		for(t=1 ;t<i ;t++)	 
		{
	    term = term+a;
		term=term*10;
	    }
		sum = sum+term;
		term = 0;
	}
	sum = sum+a*n;
	printf("%.0lf",sum);
	return 0;
 } 
 
/*输入两个整数a和n，计算下面表达式的值。
S[n]=a+aa+aaa+......+aaaa(n个)  */ 
