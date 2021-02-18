#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while (1){
        if (a==123) break;
        else scanf("%d",&a);
    }
    printf("access granted!");
    return 0;
}
