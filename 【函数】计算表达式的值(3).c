#include <stdio.h>
double S(int n);
int Fib(int n);
int main()
{
	int n;
	double sum;
	while(scanf("%d",&n)!=EOF)
	{
	    sum = S(n);
	    printf("%.6lf\n",sum);
    }
    return 0;
}
double S(int n)
{
	int i;
	double sum=0,term;
	for(i=1 ;i<=n ;i++)
	{
		term = (Fib(i+2))/(Fib(i+1)*1.0);
		sum = sum+term;
	}
	return sum;
}
int Fib(int n)
{
	int i,a=1,b=1,g;
	if(n==1||n==2)  g=1;
	else
	{
		for(i=3 ;i<=n ;i++)
		{
			g = a+b;
			a = b;
			b = g;
		}
	}
	return g;	
}
