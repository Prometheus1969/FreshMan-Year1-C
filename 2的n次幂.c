#include <stdio.h>
int main()
{
	double sum;
	int i,n;
	i = 1;
	sum = 1;
	scanf("%d",&n);
	while(i<=n)
	{
		sum = sum*2;
		i++;
	}
	printf("%.0lf",sum);
	return 0;
}
