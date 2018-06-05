#include <stdio.h>
#include <string.h>
int main()
{
	char ch[201];
	int t;
	int word=0,i,count=0;
	while(gets(ch)!=NULL) 
	{
		t = strlen(ch);
	    for(i=0 ;i<t ;i++)
	    {
	    	if(ch[i]==' '||ch[i]==','||ch[i]=='.')  word = 0;
	    	else if(word==0)
	    	{
	    		word = 1;
	    		count++;
	    	}
	    }
	    printf("%d\n",count);
	    count = 0;
	    word = 0;
    }
	return 0;
}
