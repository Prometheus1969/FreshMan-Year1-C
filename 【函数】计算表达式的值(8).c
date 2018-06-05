#include <stdio.h>
#include <math.h>
double S(int n);
int main()
{
	int n;
	double sum;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)  break;
		sum = S(n);
		printf("%.6lf\n",sum);
		sum = 0;
	}
	return 0;
} 
double S(int n)
{
	int i,g;
	double sum=0,term=0;
	for(i=1,g=0 ;i<=n ;i++,g++)
	{
		term = (pow(-1,g)*(2*i-1)*(2*i+1))/(2*i*2.0*i);
		sum = sum+term;
	}
	return sum;
}
