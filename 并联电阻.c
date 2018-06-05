#include <stdio.h>
int main()
{
    double a,b,c,x,R;
    scanf("%lf %lf %lf",&a,&b,&c);
    x = (1.0/a+1.0/b+1.0/c);
    R = (1.0/x);
    printf("%.2f",R);
	return 0;
} 
    
