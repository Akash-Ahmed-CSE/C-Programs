#include<stdio.h>
int main()
{
    int i,t1=0,t2=1,n,next;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d ",t1);
        next=t1+t2;
        t1=t2;
        t2=next;

    }
 return 0;
}
