#include <stdio.h>
int main()
{
	int i;
	float sum=0; 
	struct product
	{
		char Name[100];
		float Price;
		int quanlity;
		struct Day
		{
		    int Year;
			int Month;
			int Day;	
		}shengchan,guoqi;	
	};            //    }Goods[5];
	struct product *p,Goods[5]={{"ϴ�·�",6.79,4,{2017,2,18},{2020,3,5}}, 
	                         {"����",10.35,23,{2016,7,5},{2020,5,4}}, 
	                         {"Jack",0.01,1000,{1900,11,23},{3300,10,25}}, 
							 {"���",3.45,30,{2017,12,13},{2017,12,15}}, 
							 {"Ӣ����",10.58,12,{2017,1,23},{2017,8,4}} 
	                        };
    p = Goods;  
	for(i=0 ;i<5 ;i++,p++)
	{
	    printf("    ����:  %s    �۸�:  %.2lf    ����:  %d\n",Goods[i].Name,Goods[i].Price,Goods[i].quanlity);
		printf("    ��������:  %d-%d-%d    ����ʱ��:  %d-%d-%d\n",Goods[i].shengchan.Year,Goods[i].shengchan.Month,Goods[i].shengchan.Day,Goods[i].guoqi.Year,Goods[i].guoqi.Month,Goods[i].guoqi.Day);
		sum = sum+(*p).Price*Goods[i].quanlity; 
		printf("***********************************************************\n"); 
	}
	printf("              �ܼ�ֵΪ��  %.2lf",sum);
	return 0; 
}
