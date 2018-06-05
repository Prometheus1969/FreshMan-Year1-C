#include <stdio.h>
#include <string.h>
int main()
{
    char S1[100],S2[100],S3[200];
    int i,n,j,k,t,T,x1,x2;
    scanf("%d",&T);
    getchar();
    for(i=1; i<=T; i++)
    {
        gets(S1);
        gets(S2);
        x1=strlen(S1);
        x2=strlen(S2);
        for(n=0; n<x1; n++)
        {
            S3[n]=S1[n];
        }
        for(k=x1,j=0; j<x2; k++,j++)
        {
            S3[k]=S2[j];
        }
        S3[k]='\0';
        puts(S3);
    }
}
