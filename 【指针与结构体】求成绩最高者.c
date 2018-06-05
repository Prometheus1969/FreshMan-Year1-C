#include <stdio.h>
struct student
{
	int num;
	char name[100];
	int score;
};
int main()
{
	struct student stu[8],temp,*p;
    int i,n;	
    
    p = stu;
    for(i=0 ;i<8 ;i++)
        scanf("%d %s %d",&(p+i)->num,(p+i)->name,&(p+i)->score);
    temp = stu[0];
    for(i=1 ;i<8 ;i++)
        if((p+i)->score>temp.score)
            temp = *(p+i);
    printf("%d %s %d\n",temp.num,temp.name,temp.score);
    return 0;
}
