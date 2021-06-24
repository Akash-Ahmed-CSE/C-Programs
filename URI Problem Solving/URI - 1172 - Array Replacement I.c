#include<stdio.h>
int main()
{
    int i,x,n;
    for (i=0;i<10;i++){
            scanf("%d",&n);
        if (n>0)printf("X[%d] = %d\n",i,n);
        else printf("X[%d] = 1\n",i);
    }
    return 0;
}

