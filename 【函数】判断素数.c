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
	int n,z;
	while(scanf("%d",&n)!=EOF)
	{
		z = sushu(n);
		if(z==0)
		    printf("No\n");
		if(z==1)
		    printf("Yes\n");
	}
	return 0;
}
