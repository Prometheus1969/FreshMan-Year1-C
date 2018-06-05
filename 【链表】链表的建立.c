#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
	char num[20];
	char name[60];
	int score;
	struct student *next;
};
#define LEN sizeof(struct student)
struct student *creat(char ch[])
{
	struct student *p1,*p2,*head=NULL;
	
	p1 = p2 = (struct student *)malloc(LEN);
	scanf("%s %d",p1->name,&p1->score);
	strcpy(p1->num,ch);
	while(p1->num[0] != '0')
	{
		if(head==NULL) 	head = p1;
		else  p2->next = p1;
		p2 = p1;
		p1 = (struct student *)malloc(LEN);
		scanf("%s %s %d",p1->num,p1->name,&p1->score);
	}
	p2->next = NULL;
	free(p1);
	return head;
}
void Out(struct student *head)
{
	int sum=0,i=0;
	double aver;
	struct student *p=NULL;
	
	p = head;
	while(p != NULL)
	{
		printf("%s %s %d\n",p->num,p->name,p->score);
		sum = sum+p->score;
		p = p->next;
		i++;
	}
	aver = 1.0*sum/i;
	printf("%.2lf\n",aver);
}
int main()
{
	struct student *head;
	char ch[60];
	
	while(scanf("%s",ch)!=EOF)
	{
	    head = creat(ch);
	    Out(head);
	}
	return 0;
}
