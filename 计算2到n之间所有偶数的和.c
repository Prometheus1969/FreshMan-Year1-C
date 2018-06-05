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
 
/*给定一个正整数n（n>=2），输出2到n之间所有偶数的和，
包括2和n。输入保证2到n之间所有偶数的和在int的表示范围内。*/
