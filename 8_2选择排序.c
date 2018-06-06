#include <stdio.h>
int main()
{
	int S[6];
	int i,j,t;
	printf("ÇëÊäÈëÊı×Ö£º\n"); 
	for(i=0 ;i<6 ;i++)  scanf("%d",&S[i]);
	for(i=0 ;i<5 ;i++)
	    for(j=i+1 ;j<6 ;j++)
	    {
	    	if(S[i]>S[j])
	    	{
	    		t = S[i];
	    		S[i] = S[j];
	    		S[j] = t;
			}
		}
	for(i=0 ;i<6 ;i++)  printf("%3d",S[i]);
	return 0;
}
