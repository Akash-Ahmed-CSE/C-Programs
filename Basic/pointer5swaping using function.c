#include<stdio.h>

void swaping(int* p1,int *p2)
{
    int temp;
    temp = *p1;
    *p1=*p2;
    *p2=temp;

}

int main()
{
    int x=10,y=20;
    printf("before x=%d and y=%d\n",x,y);
    swaping(&x,&y);
        printf("after x= %d and y=%d",x,y);
    return 0;
}
