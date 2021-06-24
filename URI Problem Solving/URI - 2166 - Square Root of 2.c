#include <stdio.h>
int main()
{
    double n,i,a=0;
    scanf("%lf",&n);
    for (i=0;i<n;i++){
        a=a+2;
        a=1/a;
    }
    a=1+a;
    printf("%.10lf\n",a);
    return 0;
}

