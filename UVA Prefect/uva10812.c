#include<stdio.h>
int main()
{
    int a,i,b,sum,sub,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>=b && (a+b)%2==0){
            sum=(a+b)/2;
             sub=(a-b)/2;
            printf("%d %d\n",sum ,sub);
        }
        else printf("impossible\n");
    }
    return 0;
}
