/* 
#include <stdio.h>
int main()
{
	int x,i=0,n=0;
	int S[20];
	printf("������:\n"); 
	scanf("%d",&x);
	do{
		    S[i] = x%2;
			x = x/2;
			n++; 
			i++; 
	}while(x>0); 
	for(i=n-1 ;i>=0 ;i--)  printf("%d",S[i]);
	return 0;  
}
*/ 
//������Ƶ�����ת�� 
#include <stdio.h>
int main()
{
	int x,i=0,n=0,m;
	int S[20];
	char ch; 
	printf("���������ֺͽ���:\n"); 
	scanf("%d %d",&x,&m);
	do{
		    S[i] = x%m;
			x = x/m;
			n++; 
			i++; 
	}while(x>0); 
	for(i=i-1 ;i>=0 ;i--)
	{  
	    if(S[i]>=10)
		{
			n = S[i]-10;         //��S[i] >=10 ,�������ĸ 
			ch = 65+n;           // 10+1   B= 65(A)+1    ;10+2   C=65(A)+2 
		    printf("%c",ch);
		} 
		if(S[i]<10)  printf("%d",S[i]);
	} 
	return 0;  
}

