#include <stdio.h>
#include <string.h>
int main()
{
	int T,x,i,k,g=0;
	char ch1[1001];
	char ch2[1001];
	scanf("%d",&T);
	getchar();
	while(T)
	{
		gets(ch1);
		x = strlen(ch1);
		for(i=0,k=0 ;i<x ;k++)
		{
		    if(i%3!=2)  
			{
			    ch2[k] = ch1[i];
				i++;
			}
	    	else if(i%3==2)
	    	{
	    	    ch2[k] = ch1[i];
	    		ch2[k+1] = ' ';
	    		k = k+1;
	    		i = i+1;
	    		g++;
	    	}
	    }
	    ch2[x/3+x] = '\0';
	    puts(ch2);
	    T--;
    }
    return 0;
}
