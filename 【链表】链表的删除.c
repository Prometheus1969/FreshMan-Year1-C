#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Station
{
	char name[999];
	struct Station *next;
};
#define LEN sizeof(struct Station)
struct Station *creat(void)
{
	struct Station *p1,*p2,*head=NULL;
	
	p1 = p2 = (struct Station *)malloc(LEN);
	scanf("%s\n",p1->name);
	while(p1->name[0] != '#')
	{
		if(head==NULL)  head = p1;
		else
		    p2->next = p1;
		p2 = p1;
		p1 = (struct Station *)malloc(LEN);
		scanf("%s",p1->name);
	}
	p2->next = NULL;
	free(p1);
	return head;
}
void Out(struct Station *head)
{
	struct Station *p=NULL;
	int i=0;
	char ch[100];
	
	scanf("%s",ch);
	p = head;
	while(p != NULL)
	{
		printf("%s\n",p->name);
		p = p->next;
		i++;
	}
	printf("%d\n",i);
	p = head;
	while(strcmp(ch,(p->next)->name)!=0)
	    p = p->next;
	p->next = (p->next)->next;
	p = head;
	i = 0;
	while(p != NULL)
	{
		printf("%s\n",p->name);
		p = p->next;
		i++;
	}
	printf("%d\n",i);  
}
int main()
{
	struct Station *head=NULL;
	
	head = creat();
	Out(head);
	return 0;
} 
