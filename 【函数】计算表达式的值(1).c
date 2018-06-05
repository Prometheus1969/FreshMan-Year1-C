#include <stdio.h>
double S(int n);
int main()
{
	int n;
	double sum;
	scanf("%d",&n);
	while(1)
	{
		if(n==0)  break;
		sum = S(n);
		printf("%.6lf\n",sum);
		scanf("%d",&n);
	}
	return 0;
}
double S(int n)
{
	double term,sum=0;
	int i;
	for(i=1 ;i<=n ;i++)
	{
		term = 1.0/(i*(i+1));
		sum = sum+term;
	}
	return sum;
}
