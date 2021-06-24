#include<stdio.h>
int main()
{
    int i,n,a,b;
    double x=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a==1001)x=x+b*1.50;
        else if(a==1002)x=x+b*2.50;
        else if(a==1003)x=x+b*3.50;
        else if(a==1004)x=x+b*4.50;
        else if(a==1005)x=x+b*5.50;
    }
    printf("%.2lf\n",x);
    return 0;
}
