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

/*����һ�����飬���n������n<=100��������һ����x����������n�������Ƿ���ڴ�����
����ڣ����Find�����������No find������ͳ������Ԫ���д���x�����ݸ�����*/
