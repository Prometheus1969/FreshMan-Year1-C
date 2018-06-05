#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=5)  printf("cold");
	else if(n>=6&&n<=25)  printf("warm");
	else  printf("hot");
	return 0;
 } 
 
/*输出一个表示一天温度值的整数，判断天气情况。
如果输入的温度不超过5度，则输出cold；输入的温度为6-25度，
则输出warm，如果输入的温度不低于26度，则输出hot。*/
