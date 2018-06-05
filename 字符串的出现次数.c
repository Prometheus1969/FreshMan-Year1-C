#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	int i,j,count=0,sum=0;
	int a1,a2,g;
	char str[201],substr[201];
	scanf("%d",&T);                 //输入要比较几组字符串 
	getchar();
	while(T>0)
	{
		gets(str);
		gets(substr);
		a1 = strlen(str);
		a2 = strlen(substr);
		for(i=0 ;i<=a1-a2 ;i++)
		{
		    if(str[i]==substr[0])
		    {
		    	g = i;
		        for(i=i,j=0 ;j<a2 ;i++,j++)
				    if(str[i]==substr[j])  count++;
				if(count==a2)  sum++;
				if(count!=a2)  i = g+1;
			    count = 0;
			    i = i-1;
			}
	    }
		printf("%d\n",sum);
		sum = 0;
		T--;
	}
	return 0;
 } 
