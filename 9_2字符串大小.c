/* 
#include <stdio.h>
#include <string.h>
int size(char *p,char *q,int m,int n)
{
    int flag=0,i;
    if(m>n)  flag = 1;
    if(m<n)  flag = -1;
    if(m==n)                 //�����ַ���������ͬʱ���Ƚϵ�һ����ͬ�ַ��Ĵ�С 
    { 
    	for(i=0 ;i<m ;i++)
    	{
    		if(*(p+i)>*(q+i))  flag = 1;
    		if(*(p+i)<*(q+i))  flag = -1;
		}
	}
	return flag;
}
int main()
{
	int m,n,flag;
	char ah[999],bh[999];
	
	gets(ah);
	gets(bh);
	m = strlen(ah);
	n = strlen(bh);
	flag = size(ah,bh,m,n);
	printf("%d\n",flag);
}
*/ 
#include <stdio.h>
int size(char *p,char *q)
{
    while(*p!='\0'||*q!='\0')
	{
	    if(*p>*q)  return 1;
		else if(*p<*q)  return -1;
		p++;
	}
	if(*p=='\0'&&*q!='\0')  return -1;
	else if(*p!='\0'&&*q=='\0')  return 1;
	else  return 0;
} 	 
int main()
{
	char ah[999],bh[999];
	int flag,m,n;
	
	printf("�����������ַ���\n����һ���ַ������ڵڶ����������1\n����������0\n��С�������-1��\n"); 
	gets(ah);
	gets(bh);
	flag = size(ah,bh);
	printf("%d\n",flag); 
	return 0;
} 
/* 
#include <stdio.h>
int mycomp(char ch1[],char ch2[]) 
{
    int i=0;
	 
	while(ch1[i]!='\0'||ch2[i]!='\0')
	{
	    if(ch1[i]>ch2[i])  return 1;
		else if(ch1[i]<ch2[i])  return -1;
		i++;
	} 
	if(ch1[i]=='\0'&&ch2[i]!='\0')  return -1;
	else if(ch2[i]=='\0'&&ch1[i]!='\0')  return 1;
	if(ch1[i]=='\0'&&ch2[i]=='\0')  return 0;
} 		     
int main()
{
    char ch1[20],ch2[20];
    int res;
	 
	gets(ch1);
	gets(ch2);
	res = mycomp(ch1,ch2);
	printf("%d\n",res);
	return 0;
} 
*/ 
