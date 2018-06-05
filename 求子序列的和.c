#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,T,i;
	double term,S=0;
	scanf("%d",&T);
	while(T>0)
	{
		scanf("%d %d",&n,&m);
		for(i=n ;i<=m ;i++)
		{
			term = 1.0/(i*i);
			S = S+term;
		}
		printf("%.5lf\n",S);
		S = 0;
		T--;
	}
	return 0;
 } 
