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
 /*36��ש��36�˰ᣬ�а�4��Ů��3������С��̧һש��
 Ҫ��һ��ȫ���ꡣ���С�Ů��С���������ˡ� */ 
