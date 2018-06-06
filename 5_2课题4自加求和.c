#include <stdio.h>
int main()
{
	int i,s;
	i = 1;
	s = 0;                   
	while(i<=10)
	{
		s = s+i;            //s不断增加i的值，即为求和 
		i++;
	}
	printf("%d",s);
	return 0;
}
