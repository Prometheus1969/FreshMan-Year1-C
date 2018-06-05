#include <stdio.h>
#include <string.h>
int main()
{
	char ch[101];
	int n,i;
	int a=0,b=0,c=0,d=0,e=0;
	while(gets(ch)!=NULL)
	{
		n = strlen(ch);
		for(i=0 ;i<n ;i++)
		{
			if(ch[i]>='A'&&ch[i]<='Z')  a++;
			else if(ch[i]>='a'&&ch[i]<='z')  b++;
			else if(ch[i]>='0'&&ch[i]<='9')  c++;
			else if(ch[i]==' ')  d++;
			else  e++;
		}
		printf("%d %d %d %d %d\n",a,b,c,d,e);
        a = 0 ;b = 0 ;c = 0 ;d = 0 ;e = 0;
	}
	return 0;
}
