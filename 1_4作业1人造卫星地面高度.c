#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
	double M = 6*pow(10,24);                                 //MΪ�������� 
	double R = 6.371*pow(10,6);                              //RΪ����뾶 
	double H,T;                                              //HΪ�������������߶ȣ�TΪ���� 
	scanf("%lf",&T);
	H = pow((6.67*pow(10,11)*M*pow(T,2))/(4*PI*PI),1.0/3)-R;
	printf("����Ϊ %f ��ʱ���������������ĸ߶�Ϊ %.3eǧ��",T,H);       //%.3e����H��������� 
	return 0;
}
