#include<stdio.h>
int main()
{
    char n;
    double sa,se,TOTAL;
    scanf("%s %lf %lf",&n,&sa,&se);
    TOTAL= sa + (se*15)/100;
    printf("TOTAL = R$ %0.2lf\n",TOTAL);
    return 0;
}
