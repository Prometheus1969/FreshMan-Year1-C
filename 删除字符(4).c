#include <stdio.h>
#include <string.h>
int main()
{
	char ch[101],ah[101];
	int m,n;
	int x,i,j;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		getchar();
		gets(ch);
		x = strlen(ch);
		if(m+n>x)  n = x-m;
		for(i=0,j=0 ;i<x ;i++)
		{
			if(i>m-1&&i<=m+n-1)  continue;
			else
			{
			    ah[j] = ch[i];
			    j++;
			}
		}
		ah[j] = '\0';
        puts(ah);
	}
	return 0;
 } 
