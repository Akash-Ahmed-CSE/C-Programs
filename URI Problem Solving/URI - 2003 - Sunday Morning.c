#include<stdio.h>
int main()
{
    int a,b;
    while (scanf("%d",&a)!=EOF){
            scanf(":%d",&b);
        if (a==7)printf("Atraso maximo: %d\n",b);
        else if (a==8)printf("Atraso maximo: %d\n",b+60);
        else if(a==9) printf("Atraso maximo: %d\n",b+120);
        else printf("Atraso maximo: 0\n");
    }
    return 0;
}

