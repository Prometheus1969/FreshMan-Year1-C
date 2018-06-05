/*#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	for(m=2;m<n;m++)
	{
		if(n%m==0)
		    break;
	}
	if(m==n)
	    printf("%d为素数",n);
	else
	    printf("%d不是素数",n);
	return 0; 
}
*/
 
#include <stdio.h>
int main()
{
	int i,n,flag;
	scanf("%d",&n);
	for(i=2 ;i<n ;i++)
	{
		if(n%i==0)
	    {
	    	flag = 0;
	    	break;
		}
	}
	if(flag==0)
	    printf("不是素数");
	else
	    printf("是素数");
    return 0;
}
