#include <stdio.h>
int main()
{
	float C,F,G;
	scanf("%f",&F);
	G=F-32;
	C=5.0*G/9.0;
	printf("当华氏温度为%f时，摄氏温度为%f",F,C);
	return 0;
 } 
