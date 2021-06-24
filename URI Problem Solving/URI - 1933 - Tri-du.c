#include<stdio.h>
int main()
{
    int a,b,c;
    while (scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        if (a>b) c=a;
        else if (b>a)c=b;
        else c=a;
        printf("%d\n",c);
    }
    return 0;

}

