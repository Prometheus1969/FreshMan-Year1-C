#include <stdio.h>
void Slide(int S[],int n)
{
	int i,j,a;
	for(i=0 ;i<n-1 ;i++)
	    for(j=i+1 ;j<n ;j++)
	    {
	    	if((i+1)%2==1)
	    	    if(S[i]>S[j])
	    	    {
	    	    	a = S[i];
	    	    	S[i] = S[j];
	    	    	S[j] = a;
				}
			if((i+1)%2==0)
			    if(S[i]<S[j])
			    {
			    	a = S[i];
			    	S[i] = S[j];
			    	S[j] = a;
				}
		}
}
int main() 
{
	int T,n,i;
	int S[100]; 
	scanf("%d",&T);
	while(T>0)
	{
		scanf("%d",&n);
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
		Slide(S,n);
		for(i=0 ;i<n ;i++)
		    printf("%d ",S[i]);
		printf("\n");
		T--;
	}
	return 0;
}

/*编写函数，把形参a所指数组中的最小值放在a[0]中，最大值放到a[1]中；
再把次小值放到a[2]中，次大值放到a[3]中；依次类推。
例如，若a数组中的最初排列为9,1,4,2,3,6,5,8,7，则按规则移动后，
数据排列为：1,9,2,8,3,7,4,6,5。*/
