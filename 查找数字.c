#include <stdio.h>
int main()
{
	int S[100];
	int T,i,bigger=0,n,x;
	scanf("%d",&T);
	while(T>0)
	{
		scanf("%d",&n);
		for(i=0 ;i<n ;i++)
		{
			scanf("%d",&S[i]);
		}
		scanf("%d",&x);
		for(i=0 ;i<n ;i++)
		{
			if(x==S[i])
			{
				printf("Find ");
				break;
			}
		}
		if(i==n)  printf("No find ");
		for(i=0 ;i<n ;i++)
		{
			if(S[i]>x)  bigger++;
		}
		printf("%d\n",bigger);
		bigger = 0;
		T--;
	}
	return 0;
}

/*定义一个数组，存放n个数（n<=100）。输入一个数x，查找在这n个数中是否存在此数，
如存在，输出Find，不存在输出No find。并且统计数组元素中大于x的数据个数。*/
