#include <stdio.h>
#include <math.h>
int main()
{
	int i=1,o=2;                        //o用来进行正负号的转换 
	double term,g=0,pai;
	do{
		term = (-1.0/i)*(pow(-1,o));    //i每次+2 
		g = g-term;                      
		i = i+2;
		o++;
	}while(fabs(term)>=pow(10,-7));    
	pai = 4*g;
	printf("%.6lf",pai);
	return 0;
 } 
