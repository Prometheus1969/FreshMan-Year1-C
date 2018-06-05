#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,a,b,c,g=0,i;
	scanf("%d %d",&m,&n);
	while(m!=0&&n!=0)                                        //m,n不为0时才进行该循环 
	{
		for(i=m ;i<=n ;i++)
	    {
	    	a = i/100;                                       // 百位数字 
	        b = (i%100)/10;                                  // 十位数字 
	        c = (i%100)%10;                                  // 个位数字 
	     	if(i==pow(a,3)+pow(b,3)+pow(c,3))                // 判断是否为水仙花数 
	    	    g++;                                         // 是的话g加1 
        }        
        printf("%d\n",g);                                    // 得出本组数据的水仙花数 
        g = 0;                                               // g归零继续进行下一组数据的统计 
        scanf("%d %d",&m,&n);
    }  
        return 0;
}
