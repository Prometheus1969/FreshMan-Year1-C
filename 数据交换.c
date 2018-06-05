#include <stdio.h>
int main()
{
    int a[50],T,t,n,m,i,max,min,x,d;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        x=d=0;
        scanf("%d",&n);
        if(n<=50)
        {
            for(t=0; t<n; t++)
            {
                scanf("%d",&a[t]);
            }
            max=a[0];
            for(t=1; t<n; t++)
            {
                if(max<a[t])
                {
                    max=a[t];
                    d=t;
                }
            }
            a[d]=a[n-1];
            a[n-1]=max;
            min=a[0];
            for(t=1; t<n; t++)
            {
                if(min>a[t])
                {
                    min=a[t];
                    x=t;
                }
            }
            a[x]=a[0];
            a[0]=min;
            for(t=0; t<n; t++)
            {
                printf("%d",a[t]);
                if(t<=n-2)
                printf(" "); 
            }
            printf("\n");
        }
    }
    return 0;
}
