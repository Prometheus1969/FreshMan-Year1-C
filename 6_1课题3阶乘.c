#include <stdio.h>
int main()
{
	int n,i;
	double s;
	s = 1;
	scanf("%d",&n);
	for(i=1 ;i<=n;i++)
	{s = s*i;}
	printf("%.0lf",s);
	return 0;
}
