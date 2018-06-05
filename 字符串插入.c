#include <stdio.h>
#include <string.h>
int main()
{
	char s[101],t[101],ch[101];
	int i,j,a,g,max=0;
	while(gets(s)!=NULL)
	{
		gets(t);
		a = strlen(s);
		g = strlen(t);
		for(i=0 ;i<a ;i++)
		    if(s[i]>s[max])  max = i;
		for(i=0 ;i<=max ;i++)
		    ch[i] = s[i];
		for(j=0 ;j<g ;i++,j++)
		    ch[i] = t[j];
		for(j=max+1 ;j<a ;i++,j++)
		    ch[i] = s[j];
		ch[a+g] = '\0';
		puts(ch);
	}
	return 0;
}
