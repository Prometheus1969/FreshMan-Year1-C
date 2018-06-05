#include <stdio.h>
#include <math.h>
int main()
{
	double n,he=0,i,term;
	while(scanf("%lf",&n)!=0) 
	{
    	for(i=pow(10,32) ;i>=1 ;i=i/10 ) 
    	{
    		if(n/i!=0)                 
     		    break;
        }
            while(i>=1)               
            {
    			term = n/i;      
				if(term==0)
					i/10;     
    			he = he+term*pow(2,i);      
    			n = n-term*i;          
    			i = i/10;               
    		}
    	printf("%.0lf\n",he);
    } 
    return 0;
}
