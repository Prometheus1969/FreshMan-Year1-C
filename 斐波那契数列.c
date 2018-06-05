#include <stdio.h>
int main()
{
	int n,T,i,a=1,b=1,g;
	scanf("%d",&T);                   //T限制了运算次数 
	while(T>0)
	{
		scanf("%d",&n);
		if(n==1||n==2)               //当n的值为1或2时，单独列出 
		    printf("1\n");
		else
		{	
		    for(i=3 ;i<=n ;i++)      //递归
		    {
			    g = a+b;
			    a = b;
			    b = g;
	     	}
		    printf("%d\n",g);        
		    a = 1;                   //算出数后回归初始值 
		    b = 1;
		}
		    T--;
	}
	return 0;
 } 
