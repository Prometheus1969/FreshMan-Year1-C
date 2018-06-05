#include <stdio.h>
struct student
{
	char num[100];
	char name[100];
	int g1;
	int g2;
	int g3;
	int sum;
};
int main()
{
	struct student stu[100];
	int n,i;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0 ;i<n ;i++)
		{
		    scanf("%s %s %d %d %d",stu[i].num,stu[i].name,&stu[i].g1,&stu[i].g2,&stu[i].g3);
		    stu[i].sum = stu[i].g1+stu[i].g2+stu[i].g3;
		}
        for(i=0 ;i<n ;i++)
            if(stu[i].sum>270)
                printf("%s %s %d %d %d\n",stu[i].num,stu[i].name,stu[i].g1,stu[i].g2,stu[i].g3);
	}
	return 0;
}
