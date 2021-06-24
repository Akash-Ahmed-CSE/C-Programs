#include<stdio.h>
int main()
{
    int n,h;
    float p,ts;
    scanf("%d %d %f",&n,&h,&p);
    ts= h*p;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %0.2f\n",ts);
    return 0;
}
