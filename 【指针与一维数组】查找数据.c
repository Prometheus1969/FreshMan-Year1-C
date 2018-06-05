#include <stdio.h>
void Find(int S[10],int n,int x)
{
	int i,*p=S,g=0;
	for(i=0 ;i<n ;i++)
	{
		if(*p==x)  g=1;
		p++;
	}
	if(g==1)  printf("find!\n");
	if(g==0)  printf("no find!\n");
}
int main()
{
	int S[10];
	int T,n,i,x;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
        scanf("%d",&x);
        Find(S,n,x);
	}
}
