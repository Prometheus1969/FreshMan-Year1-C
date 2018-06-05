#include <stdio.h>
struct staff
{
	int num;
	char name[100];
	float money;
};
int main()
{
	struct staff s[10],*p;
	int n,i;
	
	p = s;
	scanf("%d",&n);
	for(i=0 ;i<n ;i++)
	    scanf("%d %s %f",&(p+i)->num,(p+i)->name,&(p+i)->money);
	for(i=0 ;i<n ;i++)
	    if((p+i)->money>5000)
	        printf("%d %s %.1f\n",(p+i)->num,(p+i)->name,(p+i)->money);
	return 0;
}
