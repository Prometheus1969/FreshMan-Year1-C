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

/*��д���������β�a��ָ�����е���Сֵ����a[0]�У����ֵ�ŵ�a[1]�У�
�ٰѴ�Сֵ�ŵ�a[2]�У��δ�ֵ�ŵ�a[3]�У��������ơ�
���磬��a�����е��������Ϊ9,1,4,2,3,6,5,8,7���򰴹����ƶ���
��������Ϊ��1,9,2,8,3,7,4,6,5��*/
