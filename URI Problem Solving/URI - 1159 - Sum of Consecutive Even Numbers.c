#include<stdio.h>
int main()
{
    int i,x,sum=0;
    while (1){
        scanf("%d",&x);
        if (x==0)break;
        if (x%2!=0)x++;
        for (i=0;i<5;i++){
            sum=sum+x;
            x=x+2;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

