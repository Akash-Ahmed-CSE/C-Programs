#include<stdio.h>
int main()
{
    long long int n,rem,a,sum=0;
    scanf("%lld",&n);
    n;
    while(n){

        rem= n%10;
        n=n/10;
        printf("%lld",rem);
    }
    printf("\n");

    return 0;
}
