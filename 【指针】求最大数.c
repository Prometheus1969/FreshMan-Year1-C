#include <stdio.h>
int main()
{
	int x,y,z,max,*p;
	while(scanf("%d %d %d",&x,&y,&z)!=EOF)
	{
		max = (x>=y)?x:y;
		max = (max>=z)?max:z;
		p = &max;
		printf("%d\n",*p);
	}
	return 0;
 } 
