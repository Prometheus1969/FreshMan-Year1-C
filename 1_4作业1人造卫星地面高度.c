#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
	double M = 6*pow(10,24);                                 //M为地球质量 
	double R = 6.371*pow(10,6);                              //R为地球半径 
	double H,T;                                              //H为人造卫星离地面高度，T为周期 
	scanf("%lf",&T);
	H = pow((6.67*pow(10,11)*M*pow(T,2))/(4*PI*PI),1.0/3)-R;
	printf("周期为 %f 秒时，人造卫星离地面的高度为 %.3e千米",T,H);       //%.3e避免H的输出过长 
	return 0;
}
