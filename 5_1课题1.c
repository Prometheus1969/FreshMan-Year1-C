#include <stdio.h>
int main()
{
	double X,Y;
	scanf("%lf",&X);
	if(X<=0)
	    Y = 0;
	else
    	Y = X*X+1;
	printf("��X��ֵΪ%.2fʱ��Y��ֵΪ%.2f",X,Y);
	return 0;
}
