#include <stdio.h>
struct student
{
	int num;
	char name[999];
	int age;
    int yuwen;
    int shuxue;
    int yingyu;
	int sum;
};
int main()
{
	struct student stu[3],*p;
	int i;
	
	p = stu;
	for(i=0 ;i<3 ;i++)
	{
	    scanf("%d %s %d %d %d %d",&(p+i)->num,(p+i)->name,&(p+i)->age,&(p+i)->yuwen,&(p+i)->shuxue,&(p+i)->yingyu);
	    (p+i)->sum = (p+i)->yuwen+(p+i)->shuxue+(p+i)->yingyu;
	}
	for(i=0 ;i<3 ;i++)
	    printf("%d %d\n",(p+i)->num,(p+i)->sum);
	return 0;   
}

