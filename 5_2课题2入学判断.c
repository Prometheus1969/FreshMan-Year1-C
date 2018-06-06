#include <stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	switch (age)
	{
		case 0:
		    printf("还没出生");
			break; 
		case 1:
		    printf("这么小上什么学");
			break;
		case 2:
		    printf("不上学谢谢");
			break; 
		case 3:
			printf("应进入小班");
			break;
		case 4:
		    printf("应进入中班");
			break;
		case 5:
		    printf("应进入大班");
			break;
		case 6:
		    printf("应该进入..不知道啥玩意?"); 
		default : 
		    printf("应该入学");
			break; 
	}
	return 0; 
}
