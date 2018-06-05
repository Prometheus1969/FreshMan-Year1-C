#include <stdio.h>
struct student
{
	char num[101];
	char name[101];
	char author[101];
	float price;
};
int main()
{
	struct student stu[101];
	char x[101];
	int flag = 0;
	
	int n,i;
	while(scanf("%d\n",&n)!=EOF)
	{
		for(i=0 ;i<n ;i++)
		{
			gets(stu[i].num);
			gets(stu[i].name);
			gets(stu[i].author);
			scanf("%f\n",&stu[i].price);
		}
		gets(x);
		for(i=0 ;i<n ;i++)
			if(strcmp(x,stu[i].num)==0)
			{
				flag = 1;
				break; 
			}
		if(flag==1)
		    printf("%s %s %s %.2f\n",stu[i].num,stu[i].name,stu[i].author,stu[i].price);
	    if(flag==0)
	        printf("No find!\n");
	    flag = 0;
	}
	return 0;
}
