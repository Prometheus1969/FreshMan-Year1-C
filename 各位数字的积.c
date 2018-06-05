#include <stdio.h>
#include <math.h>
int main()
{
	int n,ji=1,i,term;
	scanf("%d",&n);
	for(i=pow(10,9) ;i>=1 ;i=i/10 ) //i不断减少位数，即i/10 
	{
		if(n/i!=0)                  //本题并不能确定n的位数，所以利用整除的性质使i不断减少位数，直至和n位数相同 
		    break;
    }
        while(i>=1)                 //当n整除i有非零解时即可开始分离数字 
        {
			term = n/i;             //求出最高位 
			ji = ji*term;           //将最高位乘到最后结果上 
			n = n-term*i;           //将以分离的最高位消去 
			i = i/10;               //i减小位数，再次循环 
		}
	printf("%d",ji);
	return 0;
 } 
