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
 
/*������Ϊ��λ����һ��������ʾһ���˵���ߣ������0-155֮�䣬
�����low�����Ϊ156-175֮�䣬�����moderate��
176���ϵ������high��*/
