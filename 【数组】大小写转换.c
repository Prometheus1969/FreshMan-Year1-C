#include <stdio.h>
#include <string.h>
int main()
{
	int T,n,i;
	char ch1[201],ch2[201],ch3[201];
	scanf("%d",&T);
	getchar();
	while(T>0)
	{
		gets(ch1);
		n = strlen(ch1); 
	    for(i=0 ;i<n ;i++)
	    {
            if(ch1[i]>='a'&&ch1[i]<='z')  ch1[i] = ch1[i]-32; 
	        ch2[i] = ch1[i];
	    }
	    ch2[n] = '\0';
	    for(i=0 ;i<n ;i++)
	    {
		    if(ch1[i]>='A'&&ch1[i]<='Z')  ch1[i] = ch1[i]+32;
	        ch3[i] = ch1[i];
	    }
	    ch3[n] = '\0';
		puts(ch2);
		puts(ch3);
		T--;
	}
	return 0;
 } 
