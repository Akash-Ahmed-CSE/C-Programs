#include<stdio.h>
int main()
{
    int i,n,a,s=0;
    scanf("%d %d",&a,&n);
    while (n<=0 || n==0)scanf("%d",&n);
    for (i=0;i<n;i++){
        s=s+a+i;
    }
    printf("%d\n",s);
    return 0;
}

