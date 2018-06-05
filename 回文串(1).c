#include <stdio.h>
#include <string.h>
int main()
{
	char S[100];
	int n,i,count=0;
	while(gets(S)!=NULL)
	{
		n = strlen(S);
		for(i=0 ;i<n ;i++)
		    if(S[i]>='a'&&S[i]<='z')
		        S[i] = S[i]-32;
		for(i=0 ;i<n/2 ;i++)
		{
			if(S[i]==S[n-1-i])
			    count++;
			if(S[i]!=S[n-1-i])
		        break;
		}
    if(count==n/2)  printf("Yes\n");
    if(count!=n/2)  printf("No\n");
    count = 0;
	}
	return 0;
 } 
