#include <stdio.h>
int Max(int M);
int main()
{
	int M,max;
	while(scanf("%d",&M)!=EOF)
	{
		max = Max(M);
		printf("%d\n",max);
	}
	return 0;
} 
int Max(int M)
{
	int S[2][10];
	int i,max,j;
	for(i=0 ;i<2 ;i++)
		for(j=0 ;j<M ;j++)
			scanf("%d",&S[i][j]);
	max = S[0][0];
	for(i=0 ;i<2 ;i++)
	    for(j=0 ;j<M ;j++)
	    	if(max<S[i][j])  max=S[i][j];
    return max;  
}

//编写函数，找出一个2*M整型二维数组中的最大值，并返回该值。二维数组从主函数中读入。
