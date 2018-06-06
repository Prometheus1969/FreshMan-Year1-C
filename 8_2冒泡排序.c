#include <stdio.h>
int main()
{
	int S[6];
	int i,j,t;
	printf("ÇëÊäÈë6¸öÊı×Ö£º\n"); 
	for(i=0 ;i<6 ;i++)  scanf("%d",&S[i]);
	for(i=0 ;i<5 ;i++)
	    for(j=0 ;j<5-i ;j++)
	    {
	    	if(S[j]>S[j+1])
	    	{
	    		t = S[j];
	    		S[j] = S[j+1];
	    		S[j+1] = t;
			}
		}
	for(i=0 ;i<6 ;i++)
	    printf("%3d",S[i]);
	return 0;
}
