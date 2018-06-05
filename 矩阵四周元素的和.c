#include <stdio.h>
int main()
{
	int S[10][10];
	int N,i,j,sum=0;
	scanf("%d",&N);
	for(i=0 ;i<N ;i++)
	    for(j=0 ;j<N ;j++)
	    {
	        scanf("%d",&S[i][j]);
	        if(i==0)  sum = sum+S[i][j];
	        if(j==0)  sum = sum+S[i][j];
	        if(i==N-1)  sum = sum+S[i][j];
	        if(j==N-1)  sum = sum+S[i][j];
	    }
	sum = sum-S[0][N-1]-S[0][0]-S[N-1][0]-S[N-1][N-1];
	printf("%d",sum);
 } 
