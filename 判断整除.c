#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x%5==0&&x%8==0)  printf("luck\n");
	else if(x%5==0||x%8==0)  printf("good\n");
	else  printf("common\n");
	return 0;
 } 
 
/*输入一个整数，如果该数能同时被5和8整除，则输出luck，
如果能被5整除或者能被8整除，则输出good，
如果不能被5或者被8整除，则输出common。*/
