#include<stdio.h>
int main()
{
    int a,b,c,d;
    while (scanf("%d",&a)!=EOF){
        scanf("%d %d",&b,&c);
        d=a+b+c;
        if (d==0)d=0;
        else if (d>24)d=d-24;
        else if(d<0)d=d+24;
        printf("%d\n",d);
    }
    return 0;
}

