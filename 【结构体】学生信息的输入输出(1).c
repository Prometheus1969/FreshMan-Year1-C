#include <stdio.h>
struct student
{
	int num;
	char name[100];
	int age;
	int score;
	
};
int main()
{
	struct student stu[30];
	int i,n;
	
	i = 0;
    while(scanf("%d",&stu[i].num)!=EOF)
    {
    	scanf("%s %d %d",stu[i].name,&stu[i].age,&stu[i].score);
	    printf("%d\n%s\n%d\n%s\n",stu[i].num,stu[i].name,stu[i].age,stu[i].score);
    	i++;
	}

	return 0;
}
