#include <stdio.h>
#include <string.h>
void lianjie(char *p,char *q,int m,int n)
{
	int j,i;
	
    for(i=m,j=0 ;j<n ;i++,j++)
	    *(p+i) = *(q+j);
	*(p+i) = '\0';
}
int main()
{
	char ah[999],bh[999];
	int T,m,n;
	
	scanf("%d\n",&T);
	while(T--)
	{
		gets(ah);
		gets(bh);
		m = strlen(ah);
		n = strlen(bh);
		lianjie(ah,bh,m,n);
		puts(ah);
	}
	return 0;
}
