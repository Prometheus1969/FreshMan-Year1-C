#include <stdio.h>
#include <string.h>
int main()
{
	char ch[50];
	char kd[50];
	int i,n,t;
	gets(ch);
	n = strlen(ch);
	for(i=0,t=n-1;i<n,t>=0;i++,t--)
	    kd[t] = ch[i];
	kd[i] = '\0'; 
	puts(kd);
	return 0;
}

// getchar()  缓冲区避免gets() 读入之前scanf的回车键 
