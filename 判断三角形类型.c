#include <stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c); 
	if(a>=b+c||b>=a+c||c>=b+a||a==0||b==0||c==0)  printf("not a triangle\n");
	else
	{
		if(a==b&&b==c)  printf("equilateral triangle\n");
		else if(a==b||b==c||c==a)  printf("isosceles triangle\n");
		else  printf("common triangle\n");
	}
	return 0;
 } 
 
/*输入三个实数，代表三条线段的长度。判断这三条线段组成的三角形是什么类型：
等边（equilateral triangle）、等腰（isosceles triangle）、不等边（common triangle）
或不能构成三角形（not a triangle）。*/
