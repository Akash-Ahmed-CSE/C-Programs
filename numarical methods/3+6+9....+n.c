#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=3;i<=n;i=i+3){
        sum=i;
        printf("%d ",sum);
    }
    return 0;
}
