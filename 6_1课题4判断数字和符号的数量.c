#include <stdio.h>
int main()
{
	int sz,x,y,z,m,n;
	char fh;
	x = 0;
	y = 0;
	z = 0;
	m = 0;
	n = 0;
	while(scanf("%c",&fh)&&fh == 13)
	{
	if(scanf("%c",&fh)&&(fh<='z'&&fh>='a'))
	    y++;
	else if(scanf("%c",&fh)&&(fh>='A'&&fh<='Z'))
	    x++;
    }
    printf("%d %d",x,y);
    return 0;
}
