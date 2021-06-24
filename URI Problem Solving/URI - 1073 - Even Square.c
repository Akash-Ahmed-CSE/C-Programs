#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for (a=2;a<=n;a+=2){
        printf("%d^2 = %d\n",a,a*a);
    }
    return 0;
}

