#include <stdio.h>
int main()
{
	int n,i,t,sum=0,term=1;
	while(scanf("%d",&n)!=EOF)
	{ 
	    for(i=2 ;i<=n ;i=i+2)
	    {
		    for(t=1 ;t<=i ;t++)	 term = term*t;
		    sum = sum+term;
		    term = 1;
	    }
	    printf("%d\n",sum);
	    sum = 0;
    }
	return 0;
 } 
/*����һ����С��2��������10��ż��n��
���㲢���2!+4!+6!+...+n!��*/
