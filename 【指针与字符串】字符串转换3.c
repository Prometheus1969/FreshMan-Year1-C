#include <stdio.h>
#include <string.h>
int main()
{
	int n,i;
	char ch[101];
	
	while(gets(ch)!=NULL)
	{
		n = strlen(ch);
		for(i=0 ;i<n ;i++)
		{
		    if((ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z'))  ch[i] = ch[i];
		    else  ch[i] = ' ';
		}
		ch[i] = '\0';
		puts(ch);
	}
	return 0;
} 
