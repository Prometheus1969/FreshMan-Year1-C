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

/*输入两个三位数m和n，
计算m、n之间（包括m和n）能同时被3和5整数的数之和。*/
