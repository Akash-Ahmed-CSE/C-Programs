#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
    sum=sum+i;
    printf("%d \n",sum);
    }
     printf("%d ",sum);
    return 0;
}
