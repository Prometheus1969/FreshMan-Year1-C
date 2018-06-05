#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,T,j;
	char ah[999],ch[999];
	
	scanf("%d\n",&T);
	while(T--)
	{
		gets(ch);
		n = strlen(ch);
		for(i=0,j=0 ;i<n ;i++)
			if((ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z'))
			{
				ah[j] = ch[i];
				j++;
			}
		ah[j] = '\0';
		puts(ah);
	}
	return 0;
}
