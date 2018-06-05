#include <stdio.h>
#include <string.h>
void change(char *p,int n)
{
	int i;
	
	for(i=0 ;i<n ;i++)
		if(*(p+i)>='a'&&*(p+i)<='z')  *(p+i) = *(p+i)-32;
	*(p+i) = '\0';
}
int main()
{
	char AB[101];
	int n;
	
	while(gets(AB)!=NULL)
	{
		n = strlen(AB);
		change(AB,n);
		puts(AB);
	}
	return 0;
}
