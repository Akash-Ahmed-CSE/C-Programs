
/*
Find a maximum power of two that divides a given number N
Input
858616
Output
8
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("for %d is %d ", n,(1<< __builtin_ctz(n)));
    return 0;
}
