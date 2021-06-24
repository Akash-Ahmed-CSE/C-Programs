#include <stdio.h>
int main()
{
    int t,i;
    float a,b;
    scanf("%d",&t);
    for (i=0;i<t;i++){
    scanf("%f %f",&a,&b);
    if (b==0)printf("divisao impossivel\n");
    else printf ("%.1f\n",a/b);
    }
    return 0;
}

