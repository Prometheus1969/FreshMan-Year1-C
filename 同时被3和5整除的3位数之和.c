#include <stdio.h>
int main()
{
	int m,n,sum=0,i;
	scanf("%d %d",&m,&n);
	for(i=m ;i<=n ;i++)
	{
		if(i%3==0&&i%5==0)  sum = sum+i;
	}
	printf("%d",sum);
	return 0;
 }

/*����������λ��m��n��
����m��n֮�䣨����m��n����ͬʱ��3��5��������֮�͡�*/
