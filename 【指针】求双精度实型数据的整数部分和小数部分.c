#include <stdio.h>
int main()
{
	double x,*p=&x,B;
	int A;
	
	while(scanf("%lf",&x)!=EOF)
	{
		A = (int)*p;
		B = *p-A;
		printf("%d %lf\n",A,B);
	}
	return 0;
}
