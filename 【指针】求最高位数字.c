#include <stdio.h>
int main()
{
	char x[10],*c;
	int n;
	c = x;
	while(gets(x)!=NULL)
		printf("%c\n",*c);
	return 0;
 } 
