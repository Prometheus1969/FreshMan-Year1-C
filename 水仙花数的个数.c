#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,a,b,c,g=0,i;
	scanf("%d %d",&m,&n);
	while(m!=0&&n!=0)                                        //m,n��Ϊ0ʱ�Ž��и�ѭ�� 
	{
		for(i=m ;i<=n ;i++)
	    {
	    	a = i/100;                                       // ��λ���� 
	        b = (i%100)/10;                                  // ʮλ���� 
	        c = (i%100)%10;                                  // ��λ���� 
	     	if(i==pow(a,3)+pow(b,3)+pow(c,3))                // �ж��Ƿ�Ϊˮ�ɻ��� 
	    	    g++;                                         // �ǵĻ�g��1 
        }        
        printf("%d\n",g);                                    // �ó��������ݵ�ˮ�ɻ��� 
        g = 0;                                               // g�������������һ�����ݵ�ͳ�� 
        scanf("%d %d",&m,&n);
    }  
        return 0;
}
