#include<stdio.h>
int main()
{
    int x=10,y=20;
    int *p1,*p2;
    p1=&x;
    p2=&y;
   int sum=   *p1+*p2;// for value we have to use pointer
   printf("%d",sum);
   return 0;




}
