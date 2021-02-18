#include<stdio.h>
int main()
{
    int x=5,y=10;
    int *p;
    p=&x;
    printf("Value of x = %d\n",x);
    printf("Address of x = %d\n",&x);
    printf("Address of p = %d\n",p);//Cos p is equal to the address of x;
    printf("Value of p = %d\n",*p);
    printf("Address of p = %d\n",*p);//content of p
    printf("Address of p = %d\n",&p);

    return 0;
}
