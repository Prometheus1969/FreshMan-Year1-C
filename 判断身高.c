#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0&&n<=155)  printf("low");
	else if(n>=156&&n<=175)  printf("moderate");
	else  printf("high");
	return 0;
 } 
 
/*以厘米为单位输入一个整数表示一个人的身高，如果在0-155之间，
则输出low，如果为156-175之间，则输出moderate，
176以上的则输出high。*/
