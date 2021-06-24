#include<stdio.h>
int main()
{
    int i,n,R1,R2;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d %d",&R1,&R2);
        printf("%d\n",R1+R2);
    }
    return 0;
}

