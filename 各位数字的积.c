#include <stdio.h>
#include <math.h>
int main()
{
	int n,ji=1,i,term;
	scanf("%d",&n);
	for(i=pow(10,9) ;i>=1 ;i=i/10 ) //i���ϼ���λ������i/10 
	{
		if(n/i!=0)                  //���Ⲣ����ȷ��n��λ����������������������ʹi���ϼ���λ����ֱ����nλ����ͬ 
		    break;
    }
        while(i>=1)                 //��n����i�з����ʱ���ɿ�ʼ�������� 
        {
			term = n/i;             //������λ 
			ji = ji*term;           //�����λ�˵�������� 
			n = n-term*i;           //���Է�������λ��ȥ 
			i = i/10;               //i��Сλ�����ٴ�ѭ�� 
		}
	printf("%d",ji);
	return 0;
 } 
