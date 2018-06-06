#include <stdio.h>
int main()
{
	char a,b;
	scanf("%c",&a);
	if(a>=97&&a<=122)
	    b = a-31;
	else
	    b = a;
	printf("%c",b);
	return 0;
}
