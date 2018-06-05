#include <stdio.h>
int main()
{
	int s[10][10];
	int N,i,j,max,F=0,S=0;
	scanf("%d",&N);
	for(i=0 ;i<N ;i++)
	    for(j=0 ;j<N ;j++)
	    {
	        scanf("%d",&s[i][j]);
	        if(i==0&&j==0)  max = s[0][0];
	        if(s[i][j]>max)
	        {
	        	max = s[i][j];
	        	F = i;
	        	S = j;
			}
	    }
	printf("%d %d %d\n",max,F,S);
	return 0;
}
