#include <stdio.h>
#include <string.h>
typedef struct
{
    double real;
    double imag;
}Prime;
int main()
{
    Prime prime1, prime2;
    char x, a, b, c, d, e, f, g, h, k;
    int i, j, n, t, T;
    double Real,Imag;
    scanf("%d",&T);
    getchar();
    for(t=0; t<T; t++)
    {
        scanf("%c%lf%c%lf%c%c%c%c%lf%c%lf%c%lf%c%c",&a,&prime1.real,&b,&prime1.imag,&c,&d,&x,&f,&prime2.real,&g,&prime2.imag,&h,&k);
        getchar();
        if(b == '-')    prime1.imag = -prime1.imag;
        if(g == '-')    prime2.imag = -prime2.imag;
        if(x == '+')
        {
            Real = prime1.real + prime2.real;
            Imag = prime1.imag + prime2.imag;
        }
        if(x == '-')
        {
            Real = prime1.real - prime2.real;
            Imag = prime1.imag - prime2.imag;
        }
        if(Imag>0)
            printf("%.2lf%c%.2lf%c\n",Real,'+',Imag,'i');
        else
            printf("%.2lf%.2lf%c\n",Real,Imag,'i');
            getchar();
    }
    return 0;
}
