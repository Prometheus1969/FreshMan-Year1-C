#include <stdio.h>
int Readscore(int score[]);
void Sorting(int score[],int n);
float Average(int score[],int n); 
int main()
{
    int n,i;
	int score[40];
	float aver; 
	n = Readscore(score);
	printf("Total students are %d\n",n);
	Sorting(score,n);
	for(i=0 ;i<n ;i++)  printf("%d ",score[i]);
	printf("\n"); 
	aver = Average(score,n);
	printf("Average score is %.2f\n",aver); 
	return 0; 
}
int Readscore(int score[])
{
    int n=0,i=0;
	while(1)
	{
	    scanf("%d",&score[i]);
	    if(score[i]<0)  break; 
		i++;
		n++;
	}
    return n; 
} 
void Sorting(int score[],int n)
{
    int i,j,a;
	for(i=0 ;i<n-1 ;i++)
	    for(j=0 ;j<n-1-i ;j++)
		    if(score[j]<score[j+1])
			{
			    a = score[j];
				score[j] = score[j+1];
				score[j+1] = a;
			} 
}
float Average(int score[],int n)
{
	float ave;
	int i,sum=0; 
	for(i=0 ;i<n ;i++)  sum = sum + score[i];
	ave = sum/(n*1.0);
	return ave;
}
