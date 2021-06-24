#include<stdio.h>
int main()
{
    int a[9],i,p,sum=0;
    for(i=0;i<9;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    p=sum%9;
    if (p==1)printf("Dasher\n");
    else if(p==2)printf("Dancer\n");
    else if(p==3)printf("Prancer\n");
    else if(p==4)printf("Vixen\n");
    else if(p==5)printf("Comet\n");
    else if(p==6)printf("Cupid\n");
    else if(p==7)printf("Donner\n");
    else if(p==8)printf("Blitzen\n");
    else if(p==0)printf("Rudolph\n");
    return 0;
}

