#include<stdio.h>
int main()
{
    int n,i,j,k=0,x;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&x);
        for (j=1;j<x;j++){
            if(x%j==0)k+=j;
        }
        if (k==x)printf("%d eh perfeito\n",x);
            else printf("%d nao eh perfeito\n",x);
    k=0;
    }
    return 0;
}

