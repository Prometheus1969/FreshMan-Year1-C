/*#include <stdio.h>
int main()
{
    struct book
	{
	    char name[20];
		float price;
        struct 
		{   int year_out;
			int month_out;
			int day_out;
		}time_out; 
		struct
		{   int year_in;
			int month_in;
			int day_in;
		}time_in; 
	};
	struct book book1,book2;
	strcpy(book1.name,"³¯»¨Ï¦Ê°");
	strcpy(book2.name,"½Ì²Ä");
	book1.price = 35.50;
	book2.price = 100000.00;
	book1.year_out = 2010;
	book1.month_out = 10;
	bool1.day_out = 26;
	book1
	book2.year_out =  
*/ 
#include <stdio.h>
#include <string.h> 
int main() 
{
	int i; 
    struct book
	{
	    char bookname[1000];
		float bookprice;
		struct date
		{
		    int year;
			int month;
			int day;
		}js,hs;
	};
	struct book number[3];
	strcpy(number[0].bookname,"CÓïÑÔ½Ì²Ä");
    	number[0].bookprice = 100000.53;
    	number[0].js.year = 2017;
    	number[0].js.month = 11;
    	number[0].js.day = 12;
    	number[0].hs.year = 2017;
     	number[0].hs.month = 12;
    	number[0].hs.day = 5;
 	strcpy(number[1].bookname,"Wei zi jie Jack");
    	number[1].bookprice = 1010.53;
    	number[1].js.year = 2013;
    	number[1].js.month = 5;
    	number[1].js.day = 7;
    	number[1].hs.year = 2017;
    	number[1].hs.month = 2;
    	number[1].hs.day = 28;
    strcpy(number[2].bookname,"zhaohuaxishi");
	    number[2].bookprice = 0.34;
	    number[2].js.year = 2020;
    	number[2].js.month = 1;
    	number[2].js.day = 31;
    	number[2].hs.year = 2087;
    	number[2].hs.month = 4;
    	number[2].hs.day = 7;
	for(i=0 ;i<3 ;i++)
	{
		printf("name:  %s\nprice:  %.2f\n",number[i].bookname,number[i].bookprice); 
	    printf("js-date:  %d/%d/%d   hs-date:  %d/%d/%d\n\n",number[i].js.year,number[i].js.month,number[i].js.day,number[i].hs.year,number[i].hs.month,number[i].hs.day); 
	} 
	return 0; 
} 
/* 
#include <stdio.h>
#include <string.h> 
int main() 
{
    struct book
	{
	    char bookname[1000];
		float bookprice;
		struct date
		{
		    int year;
			int month;
			int day;
		}js,hs;
	};
	struct book b1 = {"zhaohuaxishi",10000000,{2017,11,7},{2017,12,8}}; 
	printf("name:%s\nprice:%.2f\n",b1.bookname,b1.bookprice); 
	return 0; 
}  
*/ 
