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
 
/*����һ�����������������ͬʱ��5��8�����������luck��
����ܱ�5���������ܱ�8�����������good��
������ܱ�5���߱�8�����������common��*/
