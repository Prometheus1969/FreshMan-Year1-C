#include <stdio.h>
int main()
{
	int m,n,i,max,min;
	scanf("%d %d",&m,&n);
	max = (m>n)?m:n;                        //�ֳ������Сֵ 
	min = (m<n)?m:n;
	i = min;                                //i����Сֵ��ʼ 
	while(i<=max)
    {
    	if(i%2 == 0)
    	    printf("%d ",i);
    	    i++;
	}
	return 0;
}
