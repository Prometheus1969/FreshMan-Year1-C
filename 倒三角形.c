#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    for(i=1;i<=n;i++)             //行的循环
    {
        for(j=1;j<=2*n-i;j++)     //第i行输入2n-i个字符，构成梯形输入框架
        {
            if(j<i)printf(" ");   //把梯形框架每行的前面填入j个空格，第一行0个，第二行1个...以此类推
            else printf("#");     //其余部分输入"#"
        }
        printf("\n");
    }
}

/*输入正整数n≤20，输出一个n层的倒三角形。如n=5时输出如下：

#########

 #######

  #####

   ###

    #
*/ 
