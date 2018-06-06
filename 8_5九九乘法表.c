/* 
#include <stdio.h>
int main()
{
	int i,j;
	printf("输入回车开始\n");
	getchar(); 
	for(i=1 ;i<=9 ;i++)
	{
	    for(j=1 ;j<=i ;j++)
	    	printf("%d*%d=%d ",i,j,i*j);
	    printf("\n");
	} 
	return 0; 
}
*/
#include <stdio.h>
int main()
{
    int a[10][10];
    int i,j; 
    printf("输入回车键开始");
	getchar(); 
	for(i=1 ;i<10 ;i++)
	    for(j=1 ;j<=i ;j++)
		a[i][j] = i*j;
	for(i=1 ;i<10 ;i++)
	{
	    for(j=1 ;j<=i ;j++)
	    printf("%d*%d=%d ",i,j,a[i][j]);
		printf("\n");
	}
	return 0;
}    
