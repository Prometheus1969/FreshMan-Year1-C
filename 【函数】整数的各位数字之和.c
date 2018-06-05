#include <stdio.h>
#include <math.h>
int qiuhe(int n);
int main()
{
	int n,he;
	while(scanf("%d",&n)!=EOF)
	{
		he = qiuhe(n);
		printf("%d\n",he);
	}
	return 0;
}
int qiuhe(int n)
{
	int he=0,i,term;
	for(i=pow(10,9) ;i>=1 ;i=i/10 ) 
	{
		if(n/i!=0)             
		    break;
    }
        while(i>=1)           
        {
			term = n/i;            
			he = he+term;          
			n = n-term*i;          
			i = i/10;               
		}
	return he;
 } 
