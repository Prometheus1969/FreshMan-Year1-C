#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[101],ch2[101],*p,*q;
	int i,j,k,n,T;
	scanf("%d\n",&T);
	while(T--)
	{
			gets(ch1);
			gets(ch2);
			p=&ch1[0];
			q=&ch2[0];
			for(j=0;j<strlen(ch1);j++)
				printf("%c",*(p++));
			for(j=0;j<strlen(ch2);j++)
				printf("%c",*(q++));
			printf("\n");
	}
	return 0;
 } 
