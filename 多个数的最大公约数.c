#include <stdio.h>
int yueshu(int S[],int a)
{
	int gy=1,i,max,j;
	for(j=0 ;j<a-2 ;j++)
	{
	    max = (S[j]>S[j+1])?S[j]:S[j+1];
	    for(i=2;i<=max;i++)                        
	    {
		    if(S[j]%i==0&&S[j+1]%i==0)
		    {
			    S[j+1] = i;
			    gy = i;
			}
	    }
    }
    return gy;                               
}
int main()
{
	int gy,gb;
	int T,i,n;
	int S[10];
	scanf("%d",&T);
	while(T>0)
	{
		scanf("%d",&n);
	    for(i=0 ;i<n ;i++)
	    	scanf("%d",&S[i]);
	    gy = yueshu(S,n);
	    printf("%d\n",gy);
		T--;	
	}
	return 0;
}
