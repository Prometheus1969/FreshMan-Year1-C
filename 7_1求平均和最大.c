#include <stdio.h>
float average(int m,int n)
{
	float pj;
	pj = (m+n)/2.0;
	return pj;
}
int main()
{
	int a,b;
	float pingjun;
	scanf("%d %d",&a,&b);
	pingjun = average(a,b);
	printf("%f",pingjun);
	return 0;
}
