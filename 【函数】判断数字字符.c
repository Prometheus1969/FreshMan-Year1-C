#include <stdio.h>
int zifu(char ch);
int main()
{
	char ch;
	int a;
	while(scanf("%c",&ch)!=EOF)
	{
		a = zifu(ch);
		if(a==0)
		    printf("Digit\n");
		else if(a==1)
		    printf("Other\n");
		getchar();
	}
	return 0;
 } 
int zifu(char ch)
{
	int x;
	if(ch>='0'&&ch<='9')
	    x = 0;
	else
	    x = 1;
	return x;    
}
