#include <stdio.h>
int main()
{
	int r,f,i,sum;
	double pingjunfen;
	i = 1;
	sum = 0;
	scanf("%d\n",&r);
	while(i<=r)
	    {
	    scanf("%d",&f);
	    sum = sum+f;
	    i++;
		}
	pingjunfen = (double)sum/r;
	printf("pingjunfen = %.2lf",pingjunfen);
	return 0;
}
