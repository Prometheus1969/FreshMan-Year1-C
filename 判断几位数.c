#include <stdio.h>
int main()
{
	int n,i=1;
	int num=0;
	while(scanf("%d",&n)!=EOF)
	{
		while(i!=0)
		{
			i = n/10;
			n = n/10;
			num++;
		}
		printf("%d\n",num);
		i = 1;
		num = 0;
	}
	return 0;
 } 

