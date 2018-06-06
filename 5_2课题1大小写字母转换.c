#include <stdio.h>
int main()
{
	char x,y;
	scanf("%c",&x);
	if(x>='A'&&x<='Z')
	    y = x+32;
	else if(x>='a'&&x<='z')
	    y = x-32;
	else
	    y = x;
	printf("%c %d",y,y);
	return 0;
}
