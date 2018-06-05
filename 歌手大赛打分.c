#include <stdio.h>
int main()
{
	int S[10],i,max,min,sum;
	double ave;
	while(scanf("%d",&S[0])!=EOF)
	{
        max = S[0];
        min = S[0];
        sum = S[0];
	    for(i=1 ;i<10 ;i++)
    	{
    		scanf("%d",&S[i]);
    		sum = sum+S[i];
    		if(max<S[i])  max = S[i];
    		if(min>S[i])  min = S[i];
     	}
    sum = sum-max-min;
    ave = sum/8.0;
    printf("%.2lf\n",ave);
    }
    return 0;
}
