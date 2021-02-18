#include<stdio.h>
int main()
{
    int x=0,y=20,z=30;
    int *p;
    p=&x;
    printf("X=%d\n",*p);
    p=&y;
    printf("y=%d\n",*p);
    p=&z;
    printf("z=%d\n",*p);
    //for value we have to use pointer *p;




    return 0;
}
