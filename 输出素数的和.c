#include <stdio.h>
int sushu(int n)
{
	int i,flag=1,z;
	for(i=2 ;i<n ;i++)
	{
		if(n%i==0)
	    {
	    	flag = 0;
	    	break;
		}
	}
	if(flag==0)
	    z = 0;
	else
	    z = 1; 
    return z;
}
int main()
{
	int n,i,sum=0,t;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=10 ;i<=n ;i++)
		{
			t = sushu(i);
			if(t==1)  sum = sum+i;
		}
		printf("%d\n",sum);
		sum = 0;
	}
}

/*给定一个正整数n，编程输出10到n之间所有素数的和，包括n */ 
