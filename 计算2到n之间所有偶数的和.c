#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=2 ;i<=n ;i=i+2)
	{
		sum = sum+i;
	}
	printf("%d\n",sum);
	return 0;
 } 
 
/*����һ��������n��n>=2�������2��n֮������ż���ĺͣ�
����2��n�����뱣֤2��n֮������ż���ĺ���int�ı�ʾ��Χ�ڡ�*/
