#include <stdio.h>
#include <stdio.h>
int main()
{
	double a,x,x1;
	int i;
	scanf("%lf",&a);
	x = a;
	do{
		x1 = x;
		x = 0.5*(x+1.0*a/x);
	}while(fabs(x-x1)>=pow(10,-8));
	printf("%.6lf\n",x);
	return 0;
 } 
 
 /*用迭代法求a平方根。迭代公式为：
 X[n+1] = 1/2(X[n]+a/X[n])
要求前后两次求出的x的差的绝对值小于10-8。*/ 
