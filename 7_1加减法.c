#include <stdio.h>
int jiafa(int m,int n)
{
	int he; 
	he = m+n;
	return he;
}
int jianfa(int m,int n)
{
	int cha;
	cha = m-n;
	return cha;
}
int main()
{
	int a,c,d;
	char b;
	scanf("%d %c %d",&a,&b,&c);
	if(b=='+')
	    d = jiafa(a,c);
	if(b=='-')
	    d = jianfa(a,c);
	printf("%d",d);
	return 0;
}
