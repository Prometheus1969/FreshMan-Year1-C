#include <stdio.h>
int main()
{
	int x,y,z,h;
	scanf("%d",&x);
	y = x%400;
	z = x%4;
	h = x%100;
	if((y==0)||(z==0&&h!=0))
	    printf("Yes");
	else
	    printf("No");
	return 0;
}
