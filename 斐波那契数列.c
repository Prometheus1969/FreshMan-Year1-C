#include <stdio.h>
int main()
{
	int n,T,i,a=1,b=1,g;
	scanf("%d",&T);                   //T������������� 
	while(T>0)
	{
		scanf("%d",&n);
		if(n==1||n==2)               //��n��ֵΪ1��2ʱ�������г� 
		    printf("1\n");
		else
		{	
		    for(i=3 ;i<=n ;i++)      //�ݹ�
		    {
			    g = a+b;
			    a = b;
			    b = g;
	     	}
		    printf("%d\n",g);        
		    a = 1;                   //�������ع��ʼֵ 
		    b = 1;
		}
		    T--;
	}
	return 0;
 } 
