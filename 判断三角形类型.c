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
 
/*��������ʵ�������������߶εĳ��ȡ��ж��������߶���ɵ���������ʲô���ͣ�
�ȱߣ�equilateral triangle����������isosceles triangle�������ȱߣ�common triangle��
���ܹ��������Σ�not a triangle����*/
