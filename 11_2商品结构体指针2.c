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
	struct product *p,Goods[5]={{"洗衣粉",6.79,4,{2017,2,18},{2020,3,5}}, 
	                         {"锤子",10.35,23,{2016,7,5},{2020,5,4}}, 
	                         {"Jack",0.01,1000,{1900,11,23},{3300,10,25}}, 
							 {"面包",3.45,30,{2017,12,13},{2017,12,15}}, 
							 {"英语书",10.58,12,{2017,1,23},{2017,8,4}} 
	                        }; 
	for( p=Goods ;p<Goods+5 ;p++)     
	{
	    printf("    名称:  %s    价格:  %.2lf    数量:  %d\n",p->Name,p->Price,p->quanlity);
		printf("    生产日期:  %d-%d-%d    过期时间:  %d-%d-%d\n",p->shengchan.Year,p->shengchan.Month,p->shengchan.Day,p->guoqi.Year,p->guoqi.Month,p->guoqi.Day);
		sum = sum+   p->Price   *   p->quanlity;                   //  p->Price    等同于   Goods[i].Price 
		printf("************************************************************\n"); 
	}
	printf("              总价值为：  %.2lf",sum);
	return 0; 
}
