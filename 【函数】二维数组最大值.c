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

//��д�������ҳ�һ��2*M���Ͷ�ά�����е����ֵ�������ظ�ֵ����ά������������ж��롣
