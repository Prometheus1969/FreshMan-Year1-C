#include <stdio.h>
#include <math.h>
double qqq(int m);
int main()
{
	int m;
	double x;
	scanf("%d",&m);
	while(m!=0)
	{
	    x = qqq(m);
	    printf("%.6lf\n",x);
	    scanf("%d",&m);
    }
	return 0;
}
double qqq(int m)
{
	int i;
	double sum=1,s,k;
	for(i=1 ;i<=m ;i++)
	{
		sum = sum*i;
	}
	k = log10(sum)
	s = sqrt(k);
	return s;
}
/*
#include<math.h>
#include<stdio.h>
double Caculate(int m) 
{
    double max = 0;
    int i;
    for (i = 1; i <= m; i++) 
    max += log(i);
    return sqrt(max);
}
int main() 
{
    double s;
    int m;
    while (scanf("%d", &m) != EOF)
	{
        if(m == 0) 
	    return 0;
        s = Caculate(m);
        printf("%.6lf\n", s);
    }
}
*/ 
