#include <stdio.h>
int rn1(int n)
{
	int m;
	m = n%4;
	return m; 
}
int rn2(int n)
{
	int m;
	m = n%100;
	return m;
}
int rn3(int n)
{
	int m;
	m = n%100;
	return m;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(rn1(n)==0&&rn2(n)!=0)
	    printf("为闰年"); 
	else if(rn2(n)==0&&rn3(n)==0)
	    printf("为闰年"); 
    else
        printf("不是闰年");
	return 0; 
}
