#include<stdio.h>
int main()
{
    int a,b,c,i,sum,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d %d",&a,&b);
        sum=0;
        if(a%2==0)a++;
        if(b%2==0)b--;
        for(c=a;c<=b;c=c+2){
            sum=sum+c;
        }
       printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}

