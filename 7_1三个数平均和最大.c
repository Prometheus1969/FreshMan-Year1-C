#include <stdio.h>
double average(int a,int b,int c);
int max(int a,int b,int c);
int main()
{
	int x,y,z,zuidazhi;
	double pingjun; 
	scanf("%d %d %d",&x,&y,&z);
	pingjun = average(x,y,z);
	zuidazhi = max(x,y,z);
	printf("ƽ��ֵΪ %lf\n",pingjun); 
	printf("���ֵΪ %d",zuidazhi); 
	return 0; 
}
double average(int a,int b,int c)
{
	double pingjunzhi;
	pingjunzhi = (a+b+c)/3.0;
	return pingjunzhi;
}
int max(int a,int b,int c)
{
	int m,n;
	m = (a>b)?a:b;
	n = (m>c)?m:c;
	return n;
}
