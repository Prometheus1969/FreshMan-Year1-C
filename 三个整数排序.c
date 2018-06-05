#include <stdio.h>
int main()
{
	int a,b,c,x,y,z;
	scanf("%d %d %d",&a,&b,&c);
	x = a;
	y = b;
	z = c;
	if(a<=b&&b<=c)
        printf("%d %d %d",x,y,z);
    if(a<b&&c<a)
	    printf("%d %d %d",x,z,y);
	if(b<a&&a<c)
	    printf("%d %d %d",y,x,z);
	if(b<c&&c<a)
	    printf("%d %d %d",y,z,x);
	if(c<a&&a<b)
	    printf("%d %d %d",z,x,y);
	if(c<b&&b<a)
	    printf("%d %d %d",z,y,x);
	return 0; 
 } 
