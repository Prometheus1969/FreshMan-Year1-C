#include <stdio.h>
int main()
{
	int man,woman,child,i;
	for(man=9 ;man>=0 ;man--)
	{
		for(woman=12 ;woman>=0 ;woman--)
		{
			child = 36-man-woman;
			if(man*4+woman*3+child*0.5==36)
			    printf("%d %d %d\n",man,woman,child);
		}
	}
	return 0;
 } 
 /*36块砖，36人搬，男搬4，女搬3，两个小孩抬一砖，
 要求一次全搬完。问男、女、小孩各多少人。 */ 
