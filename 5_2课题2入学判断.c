#include <stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	switch (age)
	{
		case 0:
		    printf("��û����");
			break; 
		case 1:
		    printf("��ôС��ʲôѧ");
			break;
		case 2:
		    printf("����ѧлл");
			break; 
		case 3:
			printf("Ӧ����С��");
			break;
		case 4:
		    printf("Ӧ�����а�");
			break;
		case 5:
		    printf("Ӧ������");
			break;
		case 6:
		    printf("Ӧ�ý���..��֪��ɶ����?"); 
		default : 
		    printf("Ӧ����ѧ");
			break; 
	}
	return 0; 
}
