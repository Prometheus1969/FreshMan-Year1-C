#include <stdio.h>
int main()
{
	char ch[81];
	int word=0,i,count=0;
	gets(ch);
	for(i=0 ;(ch[i])!='\0' ;i++)
	{
		if(ch[i]==' ')  word = 0;
		else if(word==0)
		{
			word = 1;
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
