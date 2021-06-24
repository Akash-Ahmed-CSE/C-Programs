#include <stdio.h>
int main()
{
    double n,a=0,i;
    scanf("%lf",&n);
    for (i=0;i<n;i++){
        a=a+6.0;
        a=1.0/a;
    }
    a=3.0+a;
    printf("%.10lf\n",a);
    return 0;
}


