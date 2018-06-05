#include <stdio.h>
#include <stdlib.h>
struct student
{
	char num[100];
	char name[100];
	int score;
};
int main()
{
	int n,i,j;
	struct student OST[100],temp;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0 ;i<n ;i++)
		    scanf("%s %s %d",OST[i].num,OST[i].name,&OST[i].score);
		for(i=0 ;i<n-1 ;i++)
		    for(j=0 ;j<n-i-1 ;j++)
		    	if(OST[j].score<OST[j+1].score)
		    	{
		    		temp = OST[j];
		    		OST[j] = OST[j+1];
		    		OST[j+1] = temp;
				}
		for(i=0 ;i<n ;i++)
		    printf("%s %s %d\n",OST[i].num,OST[i].name,OST[i].score);
	}
    return 0;
}

