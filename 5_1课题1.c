#include <stdio.h>
int main()
{
	double X,Y;
	scanf("%lf",&X);
	if(X<=0)
	    Y = 0;
	else
    	Y = X*X+1;
	printf("当X的值为%.2f时，Y的值为%.2f",X,Y);
	return 0;
}
