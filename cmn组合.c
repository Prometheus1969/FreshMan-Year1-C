#include <stdio.h>
double cmn(int n,int m);
int main()
{
	int m,n;
	double Cmn;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
    	Cmn = cmn(n,m);
    	printf("%.0lf\n",Cmn);
	}
	return 0;
 } 
double cmn(int n,int m)
{
	double C,N=1,M=1,A=1;
	int i,t,s;
	for(i=1 ;i<=n ;i++)
	    N = N*i;
	for(t=1 ;t<=m ;t++)
	    M = M*t;
	for(s=1 ;s<=n-m ;s++)
	    A = A*s;
	C = (1.0*N)/(M*A); 
	return C;
}
