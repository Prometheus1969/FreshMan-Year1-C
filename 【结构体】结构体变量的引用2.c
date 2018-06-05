#include <stdio.h>
struct teacher
{
	int num;
	char name[100];
	char work[100];
	int money;
	int g1;
	int g2;
	int g3;
	int year;
	int month;
	int day;
};
int main()
{
	struct teacher tea[3],*p;
	int i,n;
	
	p = tea;
	for(i=0 ;i<3 ;i++)
	{
		scanf("%d %s %s %d %d %d %d %d %d",&(p+i)->num,(p+i)->name,(p+i)->work,&(p+i)->g1,&(p+i)->g2,&(p+i)->g3,&(p+i)->year,&(p+i)->month,&(p+i)->day);
	    (p+i)->money = (p+i)->g1+(p+i)->g2+(p+i)->g3;
	}
	for(i=0 ;i<3 ;i++)
	    if((p+i)->money>5000)
	        printf("姓名：%s，出生日期：%d.%d.%d，工资：%d\n",(p+i)->name,(p+i)->year,(p+i)->month,(p+i)->day,(p+i)->money);
    return 0;
}
