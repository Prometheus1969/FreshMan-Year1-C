#include <stdio.h>
int ABC(char S1[],int n)
{
    int i,t=0;
	for(i=0 ;i<n ;i++)
        if((S1[i]<='Z'&&S1[i]>='A')||(S1[i]>='a'&&S1[i]<='z')) 
		    t++; 
	return t; 
}
int main()
{
	int i=0,n=0,T;
	char S1[50]; 
	printf("ÇëÊäÈë×Ö·û´®£º\n"); 
	while((S1[i++]=getchar())!='\n')
	    n++;
	T = ABC(S1,n);
	printf(" ×ÖÄ¸ÊýÎª %d\n",T); 
	return 0;
}
